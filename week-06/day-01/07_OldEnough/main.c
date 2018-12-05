#include <stdio.h>
#include <stdlib.h>

void canBuyAlc(int x);

int main()
{
    // Create a program which asks for the age of the user and stores it
    // Create a function which takes that age as a parameter and returns if the user is
    // old enough to buy himself alcohol in Hungary

    int age;

    printf("How old are you?\n");
    scanf("%d", &age);

    canBuyAlc(age);

    return 0;
}

void canBuyAlc(int x){
    if(x < 18){
        printf("You are not old enough to buy alcohol. Be patient or ask somebody..");
    }else if(x >= 18){
        printf("You are old enough to buy alcohol. Let's get drunk!");
    }
}