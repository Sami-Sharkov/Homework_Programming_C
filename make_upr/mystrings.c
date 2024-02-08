#include <stdio.h>
#include "mystrings.h"
int main()
{
    int test=strlength("ivancho");
    printf("%d\n",test);

    char str1[20]="Hello";
    char str2[6]="World";

    printf("%s\n",str1);
    strconcat(str1,str2);

    printf("%s\n",str1);

    int a=strcompare("ALEX","ALEX");
    printf("%d\n",a);
}
