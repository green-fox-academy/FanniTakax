#include <stdio.h>
#include <string.h>

// Write a program that opens a file called "my-file.txt", then prints
// each of lines form the file.
// You have to create the file, you can use C-programming but it is not mandatory

int main ()
{
    FILE * fptr;
    fptr = fopen("my-file.txt", "w");
    fprintf(fptr, "%s\n", "I was gonna do my homework\nbut than I started to think about\nother things and\nthan I ended up in a pub.\nAnd my dog ate my homework.\n");
    char line[111];
    fclose(fptr);

    FILE * fptr2;
    fptr2 = fopen("my-file.txt", "r");

    while(!feof(fptr2)){
        fgets(line, 111, fptr2);
        puts(line);
    }

    fclose(fptr);



    return 0;
}