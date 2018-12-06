#include <stdio.h>
#include "circle.h"

int main()
{
    printf("The area of the circle with %.2f cm radius is %.2f cm2\n", 6.18, circleArea(6.18));
    printf("The circumference of the circle with %.2f cm radius is %.2f cm\n", 6.18, circleCircumference(6.18));


    return 0;
}