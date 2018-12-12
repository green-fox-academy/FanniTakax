#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.

int percentile(int* matrix, int percentile, int matrix_size);
void swap(int* a, int* b);
void arrange(int* array, int matrix_size);


int main()
{
    srand(time(NULL));
    int* pointer = NULL;
    int size1 = 0;
    int size2 = 0;

    printf("Size of the matrix dimension nr.1: ");
    scanf("%d", &size1);
    printf("Size of the matrix dimension nr.2: ");
    scanf("%d", &size2);

    int matrix_size = size1 * size2;

    pointer = (int*) malloc(matrix_size*sizeof(int));

    for (int  i = 0;  i < matrix_size; ++ i) {
        pointer[i] = rand() % 100;
    }

// matrix checking
   for (int  i = 0;  i < matrix_size; ++ i) {
        printf(">>%d<< %d\n", i + 1, pointer[i]);
    }
    printf("_____________________________________________________________\n");

    arrange(pointer, matrix_size);

    for (int  i = 0;  i < matrix_size; ++ i) {
        printf(">>%d<< %d\n", i + 1, pointer[i]);
    }


    return 0;
}

int percentile(int* matrix, int percentile, int matrix_size)
{
    int percentile_index = (int)((percentile / 100.0) * matrix_size - 1);
    printf("percentile index %d\n", percentile_index);
    return matrix[percentile_index];
}

void swap(int* a, int* b)
{
    int substitute = *a;
    *a = *b;
    *b = substitute;
}


void arrange(int* array, int matrix_size)
{
    for (int i = 0; i < matrix_size - 1; ++i) {
        for (int j = i; j < matrix_size - 1 - i; ++j) {
            if(array[j] > array[j+1]){
                swap(&array[i], &array[j]);
            }
        }
    }
}