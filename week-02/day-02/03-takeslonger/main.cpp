#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string quote("Hofstadter's Law: It you expect, even when you take into account Hofstadter's Law.");

    // When saving this quote a disk error has occured. Please fix it.
    // Add "always takes longer than" to the quote between the words "It" and "you" using the replace function

    /*
    std::string from = "It you";
    int startP = quote.find(from);

    quote.replace(startP, from.length(), "It always takes longer than you");
     */

    std::string ins = "always takes longer than ";

    std::string rep = "It";
    int startpoint = quote.find(rep) + 3;

    quote.insert(startpoint, ins);

    std::cout << quote << std::endl;
    return 0;
}