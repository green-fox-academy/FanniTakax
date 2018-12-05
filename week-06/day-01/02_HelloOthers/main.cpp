#include<stdio.h>

int main()
{
    // Greet 3 of your classmates with this program, in three separate lines
    // like:
    //
    // Hello, Esther!
    // Hello, Mary!
    // Hello, Joe!

    char *mate1 = "Judit";
    char *mate2 = "Johnny";
    char *mate3 = "Mimi";

    printf("Hello, %s!\n", mate1);
    printf("Hello, %s!\n", mate2);
    printf("Hello, %s!\n", mate3);

    return 0;
}