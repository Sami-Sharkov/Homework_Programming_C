#include "quadraticroots.h"
#include <stdio.h>
int main()
{
    double a = 5;
    double b = 2;
    double c = 3;
    struct QuadraticRootsResult res2 = findroots(a, b, c);
    if (res2.norealroots == 1)
    {
        printf("No real roots");
    }
    else
        printf("The roots are %Lf and %Lf", res2.x1, res2.x2);
}