#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    double on;
    double tw;
    double th;
    double fo;
    double fi;

    std::cout << "Gimme five numbas(please press enter after typing each): ";
    std::cin >> on;
    std::cin >> tw;
    std::cin >> th;
    std::cin >> fo;
    std::cin >> fi;

    double sum = on+tw+th+fo+fi;
    double avar = sum/5;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Avarage: " << avar << std::endl;

    return 0;
}