#include <iostream>

void fillTomb(int * tomb, int num);
int biggestNumba(int * tomb, int length);


int main()
{
    // Refactor time!
    // use your 'refactor_maximum.cpp', solve the same exercise by creating a separate function
    // for each functionality

    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int num;

    std::cout << "How big should the array be? Give me an integer number: ";
    std::cin >> num;

    int tomb[num];


    fillTomb(tomb, num);

    biggestNumba(tomb, sizeof(tomb)/sizeof(tomb[0]));



    return 0;
}

void fillTomb(int * tomb, int num)
{
    for(int i = 0; i < num; i++){
        std::cout << "I need numbers to fill the array: " << std::endl;
        std::cin >> tomb[i];
    }
}



int biggestNumba(int * tomb, int length)
{
    int maxTomb = 0;
    int * maxPoint = &maxTomb;

    for(int i = 0; i < length; i++){
        if(maxTomb < tomb[i]){
            maxTomb = tomb[i];
        }
    }
    std::cout << maxTomb << " " << maxPoint;
    return maxTomb;
}

