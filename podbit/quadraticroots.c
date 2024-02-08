#include "quadraticroots.h"
#include <math.h>
#include "quadraticroots.h"
#define D (b * b - 4 * a * c)
struct QuadraticRootsResult findroots(double a, double b, double c)
{
    struct QuadraticRootsResult res;
    if (D < 0)
    {
        res.norealroots = 1;
        return res;
    }
    res.x1 = (-b + sqrtl(D) / 2 * a);
    res.x2 = (-b - sqrtl(D) / 2 * a);
    return res;
}
