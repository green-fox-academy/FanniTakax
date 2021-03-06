#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes 2 strings as parameter, concatenates them together and returns it back.
// Test it for long and empty strings as well.
// Try to use the least amount of memory that's possible.

char* concat(char* text1, char* text2);

int main()
{
    char* text1 = "";
    char* text2 = "kutyat.";

    char text3[100] = " euhfoehro3hrgo iorhgo rjryjyjttj tyjyjtyjtj ryj3rhgo3";

    char* text_conc_2_3 = concat(text2, text3);
    char* text_conc_1_3 = concat(text1, text3);
    char* text_conc_1_2 = concat(text1, text2);

    printf( "%s\n", text_conc_2_3);
    printf( "%s\n", text_conc_1_3);
    printf( "%s\n", text_conc_1_2);

    free(text_conc_1_2);
    free(text_conc_1_3);
    free(text_conc_2_3);

    return 0;
}

char* concat(char* text1, char* text2)
{
    char* new_text = (char*) calloc((strlen(text1) + strlen(text2) + 1), sizeof(char));

    strcat(new_text,text1);
    strcat(new_text,text2);

    return new_text;
}
