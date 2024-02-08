#include <stdio.h>
#include <limits.h>
#define STR(x)   #x
#define SHOW_DEFINE(x) printf("%s=%s\n", #x, STR(x))
#define INT int %d 4 INT_MAX INT_MIN
#define CHAR char %c 1 CHAR_MAX CHAR_MIN
#define LONG long %ld 4 LONG_MAX LONG_MIN
#define SHORT short %hd 2 SHRT_MAX SHRT_MIN
int main()
{
    SHOW_DEFINE(INT);
    SHOW_DEFINE(CHAR);
    SHOW_DEFINE(LONG);
    SHOW_DEFINE(SHORT);

 
}