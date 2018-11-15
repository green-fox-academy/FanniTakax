#include <iostream>
#include <fstream>
#include <string>

std::string ticTacResult(std::string fileName);

int main() {
    // Write a function that takes a filename as string,
    // open and read it. The file data represents a tic-tac-toe
    // game result. Return 'X'/'O'/'draw' based on which player
    // has winning situation.

    std::cout << ticTacResult("win-o.txt");
    // should print O

    std::cout << ticTacResult("win-x.txt");
    // should print X

    std::cout << ticTacResult("draw.txt");
    // should print draw

    return 0;
}

std::string ticTacResult(std::string fileName){
    std::ifstream file(fileName);
    if(file.is_open()){





    }else{
        std::string error = "Error. Couldn't open file.";
        return error;
    }
}

