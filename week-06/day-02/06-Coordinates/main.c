#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Create a struct to store coordinates (for example: int x and int y)
// Create an array which can store coordinates, do not create multidimensonal arrays here
// Fill up the coordinates in the array with random number.

typedef struct coordinates{
    int x;
    int y;
}coordinates_t;

int main()
{
    srand(time(NULL));
    coordinates_t array[6];
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        array[i].x = rand() % 66;
        array[i].y = rand() % 66;
    }

    printf("x1: %d\ny1: %d\n\n", array[0].x, array[0].y);
    printf("x2: %d\ny2: %d\n\n", array[1].x, array[1].y);
    printf("x3: %d\ny3: %d\n\n", array[2].x, array[2].y);
    printf("x4: %d\ny4: %d\n\n", array[3].x, array[3].y);
    printf("x5: %d\ny5: %d\n\n", array[4].x, array[4].y);
    printf("x6: %d\ny6: %d\n\n", array[5].x, array[5].y);



	return 0;
}