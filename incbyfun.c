#include <stdio.h>
#include "incbyfun.h"
double incby(double n, double x)
{
    if ((int)x%2==0)
    {
        return n-x;
    }
    return n+x;
}
