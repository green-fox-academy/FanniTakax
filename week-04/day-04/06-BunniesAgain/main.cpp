#include <iostream>

// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or multiplication).
int bunEars(int n);

int main() {

   std::cout << "For 3 Bunnies I expect 7 ears. Calculation says: " << bunEars(3) << std::endl;
   std::cout << "For 6 Bunnies I expect 15 ears. Calculation says: " << bunEars(6) << std::endl;

    return 0;
}

int bunEars(int n){
    if(n < 1){
        return 0;
    }else if(n % 2 != 0){
        return 2 + bunEars(n-1);
    }else{
        return 3 + bunEars(n-1);
    }
}