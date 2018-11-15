#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.
int numbers(int n);

int main() {

    numbers(4);

    return 0;
}

int numbers(int n)
{
    if(n <= 0){
        return 1;
    }else{
        std::cout << n << std::endl;
        numbers(n - 1);
    }
}