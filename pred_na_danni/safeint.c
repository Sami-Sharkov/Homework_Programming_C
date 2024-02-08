#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "safeint.h"

struct SafeResult safeadd(int a, int b)
{
    struct SafeResult result;
    result.value = a + b;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b))
    {
        result.errorflag = 1;
    }
    else
        result.errorflag = 0;
    return result;
}
struct SafeResult safesubtract(int a, int b)
{
    struct SafeResult result;
    result.value = a - b;
    if ((b < 0 && a > INT_MAX + b) || (b > 0 && a < INT_MIN + b))
    {
        result.errorflag = 1;
    }
    else
        result.errorflag = 0;
    return result;
}
struct SafeResult safemultiply(int a, int b)
{
    struct SafeResult result;
    result.value = a * b;
    if ((b != 0 && a > INT_MAX / b) || (b != 0 && a < INT_MIN / b))
    {
        result.errorflag = 1;
    }
    else
        result.errorflag = 0;
    return result;
}
struct SafeResult safedivide(int a, int b)
{
    struct SafeResult result;
    if (b == 0)
    {
        result.errorflag = 1;
    }
    else
    {
        result.errorflag = 0;
        result.value = a / b;
    }
    return result;
}
struct SafeResult safestrtoint(char *str)
{
    struct SafeResult sr;
    struct SafeResult result;
    result.errorflag = 0;
    int res = 0;
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] > '9' || str[i] < '0')
        {
            result.errorflag = 1;
            break;
        }
        sr = safemultiply(res, 10);
        if (sr.errorflag == 0)
            res = sr.value;
        else
        {
            result.errorflag = 1;
            break;
        }

        sr = safeadd(res, str[i] - '0');
        if (sr.errorflag == 0)
            res = sr.value;
        else
        {
            result.errorflag = 1;
            break;
        }
    }
    result.value = res;
    return result;
}