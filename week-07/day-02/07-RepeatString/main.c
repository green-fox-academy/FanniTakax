#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// write a function which takes a string and an integer as a parameter.
// The function should return a string where the input string is repeating.
// The number of repetition is based on the value of the integer parameter.
// For example: Apple, 5 -> AppleAppleAppleAppleApple
// Try to use the least amount of memory that's possible.

char* repeat(char* strng, int x);

int main()
{
    char* name = "Fanni";
    char* smthng = ".. ";

    char* name_repeated = repeat(name, 6);
    char* smthng_repeated = repeat(smthng, 23);

    printf("%s\n", name_repeated);
    printf("%s\n", smthng_repeated);

    free(name_repeated);
    free(smthng_repeated);

    return 0;
}

char* repeat(char* strng, int x)
{
    char* string_repeated = (char*) calloc(strlen(strng)*x + 1, sizeof(char));
    for (int i = 0; i < x; ++i) {
        strcat(string_repeated,strng);
    }

    return string_repeated;
}