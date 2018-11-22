#include "apple.h"
#include <iostream>
#include <vector>

std::string getApple(){
    return "apple";
}

int sum(std::vector<int> numbers){
    int sumNums = 0;
    for(int i = 0; i < numbers.size(); i++){
        sumNums += numbers[i];
    }
    return sumNums;
}
