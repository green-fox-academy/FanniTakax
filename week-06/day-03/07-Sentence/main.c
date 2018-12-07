#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter,
// and splits a string to words by space
// solve the problem with the proper string.h function

void split_string(char text[500])
{

    char* word = strtok(text, " ");
    while(word != NULL){
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }


}

int main()
{
    char string[256];
    printf("Type in a sentence:\n\n");
    scanf("%s", string);

    split_string(string);

    return(0);
}