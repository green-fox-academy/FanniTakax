#include <stdio.h>
#include <string.h>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void write_to_file(char file_name[100], char word[100], int lines)
{
    FILE * fptr;
    fptr = fopen(file_name, "w");
    for (int i = 1; i < lines; ++i) {
        fprintf(fptr, word);
    }
    fclose(fptr);
}

int main()
{
    write_to_file("my-file.txt", "Hanoyaridoupoo\n", 6);

    FILE * fptr;
    int counter = 0;
    fptr = fopen("my-file.txt", "r");
    char line[111];
    while(!feof(fptr)){
        fgets(line, 111, fptr);
        puts(line);
        counter++;
    }
    fclose(fptr);

    return 0;
}