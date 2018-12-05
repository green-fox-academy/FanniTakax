#include <stdio.h>

int main() {
    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // You should get these variables via console input
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double a;
    double b;
    double c;

    printf("side1: \n");
    scanf("%lf", &a);

    printf("side2: \n");
    scanf("%lf", &b);

    printf("side3: \n");
    scanf("%lf", &c);

    printf("Surface Area = %.0lf\nVolume = %.0lf\n", 2*(a*b + a*c + b*c), a*b*c);


    return 0;
}