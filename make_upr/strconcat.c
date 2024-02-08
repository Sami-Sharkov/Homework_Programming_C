#include "mystrings.h"
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        if (strlength(argv[1]) > 50)
        {
            printf("Please use a string with 50 or less characters\n");
            return 0;
        }
         if (strlength(argv[2]) > 50)
        {
            printf("Please use a string with 50 or less characters\n");
            return 0;
        }
        char out[100] = "";
        strconcat(out, argv[1]);
        strconcat(out, argv[2]);
        printf("%s\n", out);
    }
    else
    {
        printf("Please use a valid argument\n");
    }
}