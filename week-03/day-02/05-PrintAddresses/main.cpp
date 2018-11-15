#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array

    int fiveNum[5];

    std::cout << "Type in five integer numbers, please: " << std::endl;
    std::cin >> fiveNum[0];
    std::cin >> fiveNum[1];
    std::cin >> fiveNum[2];
    std::cin >> fiveNum[3];
    std::cin >> fiveNum[4];

    int * numPtr = fiveNum;

    /*for (int i = 0; i < sizeof(fiveNum)/sizeof(fiveNum[0]); i++) {
        std::cout << fiveNum + i << std::endl;
    }*/

    for (int i = 0; i < sizeof(fiveNum)/sizeof(fiveNum[0]); i++) {
        std::cout << numPtr + i << std::endl;
    }




    return 0;
}