#include <iostream>
#include <string>

std::string printParams(std::string one);
std::string printParams(std::string one, std::string two);
std::string printParams(std::string one, std::string two, std::string three);
std::string printParams(std::string one, std::string two, std::string three, std::string four);

int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters btw 0 and four

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")


    printParams("apa", "anya", "MArci", "Mimi");

    return 0;
}

std::string printParams(std::string one){
    std::cout << one;
}

std::string printParams(std::string one, std::string two){
    std:: cout << one << " " << two;
}

std::string printParams(std::string one, std::string two, std::string three){
    std:: cout << one << " " << two << " " << three;
}

std::string printParams(std::string one, std::string two, std::string three, std::string four){
    std:: cout << one << " " << two << " " << three << " " << four;
}
