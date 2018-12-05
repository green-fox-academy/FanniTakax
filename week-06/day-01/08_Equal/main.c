#include <stdio.h>
#include <stdlib.h>

int isEqual(int x, int y)
{
    if(x == y){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    // Create a program which asks for two integers and stores them separatly
    // Create a function which takes two numbers as parameters and
    // returns 1 if they are equal and returns 0 otherwise

    int num1;
    int num2;

    printf("Type in two integers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(isEqual(num1, num2)==1){
        printf("They are equal");
    }else{
        printf("Not equal");
    }


    return 0;
}