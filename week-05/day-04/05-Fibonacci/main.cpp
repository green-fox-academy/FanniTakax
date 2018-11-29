#include <iostream>
#include "fibonacci.h"


int main() {

    std::cout << add(4,5) << std::endl;
    std::cout << "________________________________" << std::endl;


    for (int i = 0; i < 23; ++i) {
        std::cout << i << ". " << fibo(i) << std::endl;
    }


    return 0;
}