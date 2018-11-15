#include <iostream>
#include <string>

std::string reverse(const std::string& text)
{
    std::string replace = text;
    unsigned int j = replace.length() -1;
    for (unsigned int i = 0; i < replace.length()/2; i++) {
        std::swap(replace[i], replace[j]);
        j--;
    }
    return replace;
}

std::string reverse2(const std::string& text2){
    std::string replace2 = text2;
    for(int i = replace2.length()-1; i >= 0; i--){
        std::cout << replace2.at(i);
    }

}


int main(int argc, char* args[])
{
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";



    // Create a method that can reverse an std:string, which is passed as the parameter
    // Use it on this reversed string to check it!
    // Try to solve this using .at() first, and optionally anything else after.
    // Hint: You might use a temporary variable to swap 2 characters or you can use std::swap function.

    std::cout << reverse(reversed) << std::endl;

    std::cout << reverse2(reversed) << std::endl;

    return 0;
}

