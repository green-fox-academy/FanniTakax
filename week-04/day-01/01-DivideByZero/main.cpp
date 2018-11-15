#include <iostream>
#include <fstream>
#include <exception>
#include <string>

int main(int argc, char* args[]) {
    try {
        float numDiv;
        std::cout << "With which number should be nr 10 divided?: ";
        std::cin >> numDiv;

        if (numDiv == 0) {
            throw 6;
        }

        float result = 10/numDiv;
        std::cout << result << std::endl;
    }
        catch(int e){
            std::cout << "ERROR. nr " << e;
        }






    return 0;
}