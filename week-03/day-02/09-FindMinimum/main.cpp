#include <iostream>

int minValue(int * tomb, int length);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    std::cout << minValue(numbers, sizeof(numbers)/sizeof(numbers[0]));



    return 0;
}

int minValue(int * tomb, int length){

    int minTomb = 0;
    for(int i = 0; i < length; i++){
        if(tomb[i] > minTomb){
            minTomb = tomb[i];
        }
    }
    for(int i = 0; i < length; i++){
        if(tomb[i] < minTomb){
            minTomb = tomb[i];
        }
    }

    return minTomb;
}