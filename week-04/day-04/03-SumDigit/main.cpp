#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
int sumDigits(int n);

int main() {

   int num;
    std::cout << "Type in a none-negative integer number and you will get its digits' sum." << std::endl;
    std::cin >> num;
    std::cout << "The sum of " << num << "'s digits is: " << sumDigits(num) << std::endl;

    return 0;
}

int sumDigits(int n)
{
    if(n < 1){
        return 0;
    }else{
        return (n%10) + sumDigits((n/10));
    }
}