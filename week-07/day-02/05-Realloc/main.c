#include <stdio.h>
#include <stdlib.h>

// Prompt the user to enter a number. This number will be X.
// Allocate memory for X numbers and prompt the user to enter X numbers.
// Allocate memory for the sum of the X numbers(Y) in the same array
// Fill the array with numbers from 1 to Y, then print them

int main()
{
    int* pointer = NULL;
    int x;
    int sum = 0;

    printf("How many numbers do you want to sum? Please enter an integer number: ");
    scanf("%d", &x);

    pointer = (int*)malloc(x * sizeof(int));

    printf("Please enter %d integers: \n", x);
    for (int i = 0; i < x; ++i) {
        int z;
        scanf("%d", &z);
        pointer[i] = z;
    }

    for (int i = 0; i < x; ++i) {
        sum += pointer[i];
    }
    printf("Their sum is: %d\n", sum);

    pointer = realloc(pointer, sum * sizeof(int));

    for (int j = 0; j < sum; ++j) {
        pointer[j] = j + 1;
        printf("oOo %d\n", pointer[j]);
    }

    free(pointer);


    return 0;
}