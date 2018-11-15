#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
int powerN(int x, int n);

int main() {

    std::cout << powerN(2, 3) << std::endl;
    std::cout << powerN(2, 4) << std::endl;
    std::cout << powerN(5, 2) << std::endl;
    std::cout << powerN(4, 3) << std::endl;

    return 0;
}

int powerN(int x, int n)
{
    if(n <= 1){
        return x;
    }else{
        return x * powerN(x, (n-1));
    }
}