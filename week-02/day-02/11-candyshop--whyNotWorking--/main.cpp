#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


std::vector<std::string> filter(const std::vector<std::string>& list, const std::vector<std::string>& sweets){
    std::vector<std::string> list2 = list;
    std::vector<std::string> sweets2 = sweets;

    for(int i = 0; i < list2.size(); ++i){
            if ( std::find(sweets.begin(), sweets.end(), list[i]) != sweets.end() ){
                list2.erase(list.begin() + i);
                i--;
            }

    }


    return list2;
}

int main(int argc, char* args[])
{
    const std::vector<std::string> sweets = {"Brownie", "Cupcake"};
    std::vector<std::string> list = {"Cupcake", "Carrot", "Bread", "Brownie", "Lemon"};

    // Accidentally we added "Carrot", "Lemon" and "Bread" to the list.
    // Your task is to remove them from the list. "sweets" vector can help you with this
    // You should erase every element from "list" vector that is not in "sweets" vector.
    // No, don't just remove the lines
    // Create a method called filter() which takes the list as a parameter.

    // Expected output: Cupcake Brownie
    for(const auto& sweet : filter(list, sweets))
    {
        std::cout << sweet << " ";
    }

    return 0;
}