#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

double circleArea (double radius)
{
    double area = radius * radius * PI;
    return area;
}

int main()
{
    double radius = 6;
    printf("The area of the circle with %.2f cm radius is %.2f cm2", radius, circleArea(radius));

    return 0;
}