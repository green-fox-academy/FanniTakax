#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int * aP = &a;
    double * bP = &b;
    std::string * nameP = &name;

    std::cout << aP << " " << bP << " " << nameP << std::endl;

    std::cout << *aP << " " << *bP << " " << *nameP << std::endl;


    return 0;
}