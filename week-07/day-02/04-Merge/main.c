#include <stdio.h>
#include <stdlib.h>

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    int* pointer1 = NULL;
    int* pointer2 = NULL;

    pointer1 = (int*) malloc(10 * sizeof(int));
    pointer2 = (int*) malloc(10 * sizeof(int));

    for (int i = 0; i < 10; ++i) {
        pointer1[i] = i * 2;
    }

    for (int i = 0; i < 10; ++i) {
        printf("pointer2[%d]: %d\n", i, pointer1[i]);
    }

    for (int i = 0; i < 10; ++i) {
        pointer2[i] = (i * 2) + 1;
    }

    for (int i = 0; i < 10; ++i) {
        printf("pointer1[%d]: %d\n", i, pointer2[i]);
    }

    pointer1 = realloc(pointer1, 20 * sizeof(int));

    int x = 0;
    for (int j = 10; j < 20; ++j) {
        pointer1[j] = pointer2[x];
        x++;
    }

    free(pointer2);

    for (int k = 19; k >= 0 ; --k) {
        printf(">> %d\n", pointer1[k]);
    }

    free(pointer1);

    return 0;
}