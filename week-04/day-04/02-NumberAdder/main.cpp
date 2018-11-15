#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.
int addNums(int n);

int main() {

    std::cout << addNums(4) << std::endl;
    std::cout << addNums(5) << std::endl;
    std::cout << addNums(6) << std::endl;

    return 0;
}

int addNums(int n)
{
    if(n <= 1){
        return 1;
    }else{
        return n + addNums(n-1);
    }
}