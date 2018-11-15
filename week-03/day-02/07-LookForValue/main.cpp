#include <iostream>

int returnIndex(int * tomb, int length, int a);

int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

    int tomb[6] = {2, 4, 6, 8, 10, 12};
    int length = sizeof(tomb)/sizeof(tomb[0]);
    std::cout << returnIndex(tomb, length, 20);

    return 0;
}

int returnIndex(int * tomb, int length, int a){
    for(int i = 0; i < length; i++){
        if(tomb[i] == a){
            return i;

        }
    }
    return 0;
}