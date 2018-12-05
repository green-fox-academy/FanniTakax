#include <stdio.h>
#include <stdlib.h>

int isEven(int a)
{
    if(a % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter and
    // returns 1 if that number is even and returns 0 otherwise
    // (in this case 0 is an even number)

    int num;

    printf("Gimme a numba:\n");
    scanf("%d", &num);

    if(isEven(num) == 1){
        printf("The numba is even");
    }else{
        printf("Odd numba");
    }

    return 0;
}