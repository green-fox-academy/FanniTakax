#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int chicken;
    std::cout << "How many chickens do you have on the farm? Type ir here: ";
    std::cin >> chicken;

    int pigs;
    std::cout << "How many pigs do you have on the farm? Type ir here: ";
    std::cin >> pigs;

    int legs = chicken * 2 + pigs * 4;

    std::cout << "All your animals have " << legs << " in total.";



    return 0;
}