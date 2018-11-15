#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

std::vector<std::string> quoteSwap(std::vector<std::string>& quote);

int main(int argc, char* args[])
{
    std::vector<std::string> quote = {"What", "I", "do", "create,", "I", "cannot", "not", "understand."};

    // Accidentally I messed up this quote from Richard Feynman. what i cannot create i do not understand
    // Two words are out of place
    // Your task is to fix it by swapping the right words with code
    // Create a method called quoteSwap().

    // Also, print the sentence to the output with spaces in between.

    quoteSwap(quote);


    return 0;
}


std::vector<std::string> quoteSwap(std::vector<std::string>& quote){
    std::vector<std::string> quote2 = quote;
    std::swap(quote2[2], quote2[5]);
    for(const auto quot : quote2){
        std::cout << quot << " ";
    }

    return quote2;
}
