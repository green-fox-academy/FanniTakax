#include <iostream>

// Create a recursive function called `refactorio`
// that returns it's input's factorial
int refactorio(int n);

int main() {

    std::cout << refactorio(0) << std::endl;
    std::cout << refactorio(1) << std::endl;
    std::cout << refactorio(2) << std::endl;
    std::cout << refactorio(3) << std::endl;
    std::cout << refactorio(23) << std::endl;

    return 0;
}

int refactorio(int n){
    if(n <= 1){
        return 1;
    }else{
        return n * refactorio(n-1);
    }


}