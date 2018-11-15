#include <iostream>
#include <fstream>
#include <string>

bool copyLines(std::string file1, std::string file2);
// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

int main() {

    copyLines("text.txt", "text_copy.txt");

    return 0;
}

bool copyLines(std::string file1, std::string file2){
    std::ifstream file01(file1);
    std::ofstream file02(file2);
    if(file01.is_open() && file02.is_open()){
        std::string line;
        while(std::getline(file01, line)){
            file02 << line << std::endl;
        }
        return true;

    }else {
        return false;
    }
}