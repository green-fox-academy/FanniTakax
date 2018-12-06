#include "circle.h"

double circleArea (double radius)
{
    double area = radius * radius * PI;
    return area;
}

double circleCircumference(double radius)
{
    double circumference = 2 * radius * PI;
    return circumference;
}