#include "mystrings.h"
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int a = strcompare(argv[1],argv[2]);
        printf("%d\n", a);
    } else{
        printf("Please use a valid argument\n");
    }
}