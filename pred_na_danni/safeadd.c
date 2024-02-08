#include <stdio.h>
#include "safeint.h"
int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Please have 2 intigers\n");
        return 0;
    }
    struct SafeResult res2 = safestrtoint(argv[1]);
    struct SafeResult res3 = safestrtoint(argv[2]);
    if (res2.errorflag == 1 || res3.errorflag == 1)
    {
        printf("Error converting to integer\n");
        return 0;
    }
    struct SafeResult res = safeadd(res2.value, res3.value);
    if (res.errorflag == 1)
    {
        printf("Overflow or Underflow!");
        return 0;
    }
    printf("%s+%s=%d", argv[1], argv[2], res.value);
}