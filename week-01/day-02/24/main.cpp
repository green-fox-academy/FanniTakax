#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that prints all the even numbers between 0 and 500
    int x;
    for(x = 1; x < 500; x++){
        if(x % 2 == 0)
            std::cout << x << std::endl;
    }

    return 0;
}