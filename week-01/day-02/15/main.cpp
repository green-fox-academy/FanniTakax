#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    // 1 kilometer = 0.621371192 miles

    float kilometer;
    std::cout << "How many km did you walk? Type it here: " << std::endl;
    std::cin >> kilometer;

    double mile = kilometer * 0.621371192;

    std::cout << "Nice! It is " << mile << " miles." << std::endl;

    return 0;
}