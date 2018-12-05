#include<stdio.h>

int main()
{
    // Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result

    int p = 13;
    int s = 22;

    printf("%d + %d = %d\n", p, s, p + s);
    printf("%d - %d = %d\n", s, p, s - p);
    printf("%d * %d = %d\n", p, s, p * s);
    printf("%d / %d = %.2f\n", p, s, (float)p / s);
    printf("The remainder of %d divided by %d is %d\n", s, p, s % p);

    int add = p + s;
    int sub = s - p;
    int multi = s * p;
    float div = (float)p / s;
    int rem = s % p;

    printf("%d + %d = %d\n", p, s, add);
    printf("%d - %d = %d\n", s, p, sub);
    printf("%d * %d = %d\n", p, s, multi);
    printf("%d / %d = %.2f\n", p, s, div);
    printf("The remainder of %d divided by %d is %d\n", s, p, rem);





    return 0;
}