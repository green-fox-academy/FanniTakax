#include <stdio.h>

int main() {

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8

    int numGuess;
    int num;

    printf("Number to guess, entered by Game Master:\n");
    scanf("%d", &num);

    printf("Player, please guess a number:\n");
    scanf("%d", &numGuess);

    while(num != numGuess){
        if(num>numGuess){
            printf("The stored number is higher. Player, please guess again:\n");

            scanf("%d", &numGuess);
        }else if(num<numGuess){
            printf("The stored number is lower. Player, please guess again:\n");
            scanf("%d", &numGuess);
        }
    }

    if(num == numGuess){
        printf("You found the number: %d\n", numGuess);
    }


    return 0;
}