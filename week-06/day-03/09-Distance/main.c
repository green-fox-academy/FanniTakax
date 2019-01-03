#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int main ()
{
    char str[] = "This is a sample string";
    char *first, *last;

    return 0;
}

int distance_btw_char(char charray[], char c)
{
    int counter = 0;
    for(int i = 0; i < strlen(charray); i++){
        counter++;
        if(charray[i] == c)
            break;
    }
}