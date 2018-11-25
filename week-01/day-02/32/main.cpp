#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // square like this:
    //
    //
    // %%%%%
    // %%  %
    // % % %
    // %  %%
    // %%%%%
    //
    // The square should have as many lines as the number was

    int input = 0;
    std::cout << "Enter an integer btw 1 and 20: " << std::endl;
    std::cin >> input;

    for (int i = 0; i < input; i++){
        for (int j = 0; j < input; ++j) {
            if(i == 0 || i == input - 1){
                std::cout << "%";
            }else if(i < input - 1 && i > 0){
                if(j == 0 || j == input - 1){
                    std::cout << "%";
                }else if(j == i){
                    std::cout << "%";
                }else{
                    std::cout << " ";
                }
            }
        }

        std::cout << std::endl;
    }

    return 0;
}

