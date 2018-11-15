#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"
    int x = 0;

    while (x < 100){
        std::cout << "I won't cheat on the exam!" << std::endl;
        x += 1;
    }
/*
    for (int x = 0; x < 100 ; x++) {
        std::cout << "oOo" << std::endl;
    }

    return 0;
}
 */