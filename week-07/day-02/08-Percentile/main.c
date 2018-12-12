#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Read the size of a matrix(don't have to be squared matrix) from the console.
//Allocate memory dynamically for the elements of the matrix, then read the elements.
//Create a function which can calculate the n-th percentile of the elements.
//Calculate the 80-th and the 90-th percentile.


void swap(int* a, int* b);
int* arrange(int* array, int matrix_size);
int percentile(int* matrix, int percentile, int matrix_size);

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

    printf("%dth percentile: %d\n", 50, percentile(pointer, 50, matrix_size));
    printf("%dth percentile: %d\n", 80, percentile(pointer, 80, matrix_size));


    return 0;
}


void swap(int* a, int* b)
{
    int substitute = *a;
    *a = *b;
    *b = substitute;
}


int* arrange(int* array, int matrix_size)
{
    for (int i = 0; i < matrix_size-1; ++i) {
        for (int j = 0; j < matrix_size-1; ++j) {
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
    return array;
}

int percentile(int* matrix, int percentile, int matrix_size)
{
    int* matrix_arranged = arrange(matrix, matrix_size);
    int percentile_index = (int)((percentile / 100.0) * matrix_size);

    return matrix_arranged[percentile_index];
}
