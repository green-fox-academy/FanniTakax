#include <iostream>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int num;

    std::cout << "How big should the array be? Give me an integer number: ";
    std::cin >> num;

    int tomb[num];

    for(int i = 0; i < num; i++){
        std::cout << "I need numbers to fill the array: " << std::endl;
        std::cin >> tomb[i];
    }

    int maxTomb = 0;
    int * maxPoint = &maxTomb;

    for(int i = 0; i < sizeof(tomb)/sizeof(tomb[0]); i++){
        if(maxTomb < tomb[i]){
            maxTomb = tomb[i];
        }
    }

    std::cout << "The biggest number is: " << maxTomb << " and it's memory addresse is: " << maxPoint;
    return 0;
}