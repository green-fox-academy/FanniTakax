#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_strings(char * text_01, char * text_02);

int main()
{
    // Create a program which asks for two strings and stores them
    // Create a function which takes two strings as parameters and
    // returns 1 if the two strings are the same and 0 otherwise
    // Try to erase small and uppercase sensitivity.

    char text_01[100];
    char text_02[100];

    puts("Text 01: ");
    gets(text_01);

    puts("Text 02: ");
    gets(text_02);

    if(compare_strings(text_01, text_02) == 1){
        printf("The texts are the same.");
    }else if(compare_strings(text_01, text_02) == 0){
        printf("The texts are NOT the same.");
    }

    return 0;
}

int compare_strings(char * text_01, char * text_02)
{
    if (strcasecmp(text_01, text_02) == 0){
        return 1;
    }else {
        return 0;
    }
}