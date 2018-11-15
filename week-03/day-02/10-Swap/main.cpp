#include <iostream>

void swap(int * a, int * b);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;
    int * aP = &a;
    int * bP = &b;

    swap(aP, bP);
    std::cout << "a: " << a << ", b is: " << b << std::endl;

    return 0;
}

void swap(int * a, int * b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}