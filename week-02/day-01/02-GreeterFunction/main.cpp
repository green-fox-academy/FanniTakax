#include <iostream>
#include <string>

void greet(std::string x);

int main(int argc, char* args[]) {

    // - Create a string variable named `al` and assign the value `Greenfox` to it
    // - Create a function called `greet` that greets it's input parameter
    // - Greeting is printing e.g. `Greetings dear, Greenfox`
    // - Greet `al`

    std::string al = "Greenfox";

    greet(al);


    return 0;
}

void greet(std::string x){
    std::cout << "Greetings dear " << x;
}