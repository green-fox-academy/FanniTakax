#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

void where_is_i(char array[]);

int main ()
{
    char string[55] = "This is a string for testing";

    where_is_i(string);

    return 0;
}

void where_is_i(char array[])
{
    printf("i is at index: ");
    for(int c = 0; c < strlen(array); c++){
        if(array[c] == 'i'){
            printf("%d, ", c);
        }
    }
}