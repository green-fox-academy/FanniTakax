#include <stdio.h>
#include <stdlib.h>

// print out the characters that corresponds to these ascii values

//int compare (const void * a, const void * b)
//{
//    return ( *(int*)a - *(int*)b );
//}

int main()
{
    int array[] = { 103, 114, 101, 101, 110, 32, 102, 111, 120};

    int size = sizeof(array) / sizeof(array[0]);

    for(int i = 0; i < size; i++){
        printf("%c", array[i]);
    }

    //qsort (array, 9, sizeof(int), compare);
    //for (int n = 0; n < 9; n++)
    //    printf ("%d ",array[n]);

    return 0;
}