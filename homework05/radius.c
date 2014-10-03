#include <stdio.h>
#include <math.h>

#include "geom.h"

typedef struct point2d point;
typedef struct triangle triangle;

double distance(point, point);
double perimeter(triangle);
double area(triangle);

int main(void)
{
    point a = {2, 2};
    point b = {-2, 1};
    point c = {0, -3};
    triangle t = {a, b, c};
    double r = 2*area(t)/perimeter(t);
    
    printf("The radius is %f\n", r);
    
    return 0;
}



