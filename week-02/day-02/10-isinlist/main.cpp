#include <iostream>
#include <algorithm>
#include <vector>


bool checkNums(const std::vector<int>& numbers, const std::vector<int>& checker){
    std::vector<int> numbers2 = numbers;
    std::vector<int> checker2 = checker;

    for(int i = 0; i < numbers2.size(); ++i){
        for(int j = 0; j < checker2.size(); ++j){
            if ( std::find(numbers2.begin(), numbers2.end(), checker2[j]) != numbers2.end() ){
                return true;
            }
            else{
                return false;
            }
        }
    }
}


int main(int argc, char* args[])
{
    const std::vector<int> numbers = {2, 4, 6, 8, 10, 12, 14, 16};
    const std::vector<int> checker = {4, 8, 12, 16};

    // Check if vector contains all of the following elements: 4,8,12,16
    // Create a method that accepts vector as an input
    // it should return "true" if it contains all, otherwise "false"


    if(checkNums(numbers, checker)){
        std::cout << "Good :)" << std::endl;
    }
    else{
        std::cout << "Not Good :(" << std::endl;
    }

    return 0;
}