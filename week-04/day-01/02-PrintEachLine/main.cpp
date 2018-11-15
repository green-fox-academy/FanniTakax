#include <iostream>
#include <fstream>
#include <string>

int main () {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream file("my-file.txt");
    if(file.is_open()){
        std::cout << "The following lines are in the file: " << std::endl;
    }else {
        std::cout << "File couldn't be opened." << std::endl;
    }
    std::string line;
    while(std::getline(file, line)){
        std::cout << line << std::endl;
    }
    return 0;
}