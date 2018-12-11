#include <stdio.h>
#include <stdlib.h>

//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

int main()
{
    int size = 0;
    printf("Size of the matrix: ");
    scanf("%d", size);

    int* pointer = (int*) malloc(size*size*sizeof(int));

    int counter = 1;

    for (int  i = 0;  i < size * size; ++ i) {
        counter ++;
        pointer[i] = counter;
    }

    for (int  i = 0;  i < size * size; ++ i) {
        printf(">> %d", pointer[i]);
    }

    return 0;
}

