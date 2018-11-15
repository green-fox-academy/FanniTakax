#include <iostream>
#include <fstream>
#include <string>

int nrLinesOfFile(std::string file);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file


    std::cout << nrLinesOfFile("text.txt");


    return 0;
}

int nrLinesOfFile(std::string fileAme)
{
    std::ifstream file(fileAme);
    if(file.is_open()){
        int counter = 0;
        std::string line;
        while(std::getline(file, line)){
            ++counter;
        }
        return counter;
    }else{
        return 0;
    }
}