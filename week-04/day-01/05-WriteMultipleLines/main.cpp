#include <iostream>
#include <fstream>
#include <string>

std::ofstream writeToFile(std::string path, std::string word, int number);
// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

int main() {

    writeToFile("../multiplines.txt", "lama", 8);
//test the function
    std::ifstream file("../multiplines.txt");
    if(file.is_open()){
        std::cout << "The following lines are in the file: " << std::endl;
    }else {
        std::cout << "File couldn't be opened." << std::endl;
    }
    std::string line;
    int counter = 0;
    while(std::getline(file, line)){
        ++counter;
        std::cout << counter << ". " << line << std::endl;
    }
    file.close();

    return 0;
}

std::ofstream writeToFile(std::string path, std::string word, int number){
    std::ofstream newFileFill(path);
    if(newFileFill.is_open()){
        for(int i = 0; i < number; i++){
            newFileFill << word << std::endl;
        }
        newFileFill.close();

    }else{
        std::cout << "Couldn't open file";
    }
    return newFileFill;
}