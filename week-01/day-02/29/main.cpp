#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was

    int x;

    std::cout << "Type a number to get your pyramid: ";
    std::cin >> x;

    for(int n = 0; n < x; n++) {
        for (int m = 0; m < (2 * x); m++){
            if(x - n < m && m < x + n){
                std::cout << "*";
            }else{
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }



    return 0;
}