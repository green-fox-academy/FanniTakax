#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
int bunEars(int n);

int main() {

    std::cout << bunEars(8) << std::endl;
    std::cout << bunEars(12) << std::endl;
    std::cout << bunEars(23) << std::endl;
    std::cout << bunEars(34) << std::endl;

    return 0;
}
int bunEars(int n){
    if(n < 1){
       return 0;
    }else{
        return 2 + bunEars(n-1);
    }
}