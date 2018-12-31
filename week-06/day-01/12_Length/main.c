#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    // Create a program which asks for the name of the user and stroes it
    // Create a function which takes a string as a parameter and returns the lenght of it
    // Solve this exercie with and without using string.h functions

    char name[10];

    printf("Type your name:\n");
    scanf("%s", name);

    printf(" your name is %d long", strlen(name));



    return 0;
}