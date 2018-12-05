#include <stdio.h>
#include <stdlib.h>

int isSumOfDigitsEqual(int a, int b){
    int x, sum1 = 0, sum2 = 0, remainder;

    x = a;

    while(x != 0){
        remainder = x % 10;
        sum1 = sum1 + remainder;
        x = x / 10;
    }

    x = b;

    while(x != 0){
        remainder = x % 10;
        sum2 = sum2 + remainder;
        x = x / 10;
    }

    if(sum1 == sum2){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    // Create a program which asks for two numbers and stores them
    // Create a function which takes two numbers as parameters
    // and returns 1 if the sum of the number of digits are equal and 0 otherwise
    //
    // For example:
    //
    // Case 1:
    //
    // a = 123
    // b = 321
    //
    // sum of number of digits (variable a) = 1 + 2 + 3 = 6
    // sum of number of digits (variable b) = 3 + 2 + 1 = 6
    // in this case the function should return 1
    //
    //
    // Case 2:
    //
    // a = 723
    // b = 114
    //
    // sum of number of digits (variable a) = 7 + 2 + 3 = 12
    // sum of number of digits (variable b) = 1 + 1 + 4 = 6
    // in this case the function should return 0

    int num1;
    int num2;

    printf("Enter an integer\n");
    scanf("%d", &num1);
    printf("Enter another integer\n");
    scanf("%d", &num2);

    if(isSumOfDigitsEqual(num1, num2) == 1){
        printf("Sum of digits are equal.");
    }else{
        printf("Sum f digits are NOT equal.");
    }



    return 0;
}