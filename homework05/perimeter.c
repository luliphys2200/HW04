#include <math.h>
#include "geom.h"

double distance(struct point2d, struct point2d);

double perimeter(struct triangle t)
{
    double ab = distance(t.a, t.b);
    double ac = distance(t.a, t.c);
    double bc = distance(t.b, t.c);
    return ab + ac + bc;
}
