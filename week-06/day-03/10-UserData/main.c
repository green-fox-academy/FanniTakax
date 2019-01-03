#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
    char data[100];

    puts("Please enter your first name, last name and age, each separated by a space:");
    gets(data);

    char* first_name;
    char* last_name;
    char* age_str;
    int age_int;

    first_name = strtok(data, " ");
    last_name = strtok(NULL, " ");
    age_str = strtok(NULL, " ");

    if(atoi(age_str) > 0){
        age_int = atoi(age_str);
    }else{
        age_int = -1;
    }

    printf("Your name is: %s %s and you are %d years old", first_name, last_name, age_int);


    return 0;
}