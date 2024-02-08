#include "mystrings.h"
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int test = strlength(argv[1]);
        printf("%d\n", test);
    } else{
        printf("Please use a valid argument\n");
    }
}