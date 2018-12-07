#include <stdio.h>
#include <string.h>

// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

int file_lines(char * file_name)
{
    FILE * fptr;
    int counter = 0;
    fptr = fopen(file_name, "r");
    char line[111];
    while(!feof(fptr)){
        fgets(line, 111, fptr);
        counter++;
    }
    fclose(fptr);
    return counter;
}

int main ()
{
    printf("The text file has %d lines", file_lines("my-file.txt"));

    return 0;
}