#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int * aP = &a;
    int * bP = &b;

    int c = *aP + *bP;

    std::cout << c;

    return 0;
}