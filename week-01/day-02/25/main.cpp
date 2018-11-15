#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for a number and prints the multiplication table with that number
    //
    // Example:
    // The number 15 should print:
    //
    // 1 * 15 = 15
    // 2 * 15 = 30
    // 3 * 15 = 45
    // 4 * 15 = 60
    // 5 * 15 = 75
    // 6 * 15 = 90
    // 7 * 15 = 105
    // 8 * 15 = 120
    // 9 * 15 = 135
    // 10 * 15 = 1

    int number;
    std::cout << "Give me a number and i will print its multiplication table! Your number is: ";
    std::cin >> number;

    int x;
    for(x=1; x<11; x++){
        std::cout << x << " * " << number << " = " << (x * number) << std::endl;
    }



    return 0;
}