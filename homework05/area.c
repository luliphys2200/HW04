/*
 * Calculate the area of a triangle
 */
 
#include <math.h>
#include "geom.h"

double distance(struct point2d, struct point2d);
double perimeter(struct triangle);
 
double area(struct triangle t)
{
    double ab = distance(t.a, t.b);
    double ac = distance(t.a, t.c);
    double bc = distance(t.b, t.c);
    double p = perimeter(t)/2;
    return sqrt(p*(p - ab)*(p - ac)*(p - bc));
}
