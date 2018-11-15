#include <iostream>

int main(int argc, char* args[]) {

    int num1;
    int num2;

    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Thank you. Now enter another one: ";
    std::cin >> num2;

    if(num1 > num2){
        std::cout << num1 << " is the bigger number." << std::endl;
    }else if(num2 > num1){
        std::cout << num2 << " is bigger." << std::endl;
    }else{
        std::cout << "They are equal" << std::endl;
    }

    // Write a program that asks for two numbers and prints the bigger one

    return 0;
}