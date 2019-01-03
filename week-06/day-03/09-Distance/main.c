#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance_btw_char(char array[]);

int main ()
{
    char str[] = "This is a sample string";
    //char *first, *last;

    printf("The distance between the first and last occurrance of 's' in the string is >>> %d <<< .", distance_btw_char(str));

    return 0;
}

int distance_btw_char(char array[])
{
    char s = 's';
    int first_counter = 0;
    for(int i = 0; i < strlen(array); i++){
        first_counter++;
        if(array[i] == s)
            break;
    }

    int last_counter = strlen(array);
    for(int i = strlen(array); i > 0; i--){
        last_counter--;
        if(array[i] == s)
            break;
    }

    return (last_counter - first_counter);
}