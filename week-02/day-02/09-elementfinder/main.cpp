#include <iostream>
#include <algorithm>
#include <vector>

std::string containsSeven(const std::vector<int>& numbers)
{
    std::vector<int> numb = numbers;
    bool seven = false;
    for(int i = 0; i < numb.size(); ++i){
        if(numb[i] == 7){
            seven = true;
        }
    }
    if(seven == true){
        return "Hoorray";
    }else{
        return "Noooooo";
    }


}

std::string containsSeven_stdfind(const std::vector<int>& numberss)
{
    std::vector<int> numb2 = numberss;
    if(std::find(numb2.begin(), numb2.end(), 7) != numb2.end() ){
        return "Hoorray!";
    }
    else{
        return "Noooooo!";
    }

}

int main(int argc, char* args[])
{
    const std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Write a method that checks if the arrayList contains "7" if it contains return "Hoorray" otherwise return "Noooooo"
    // The output should be: "Noooooo"
    // Do this with 2 different solutions. First should iterate through the vector and check every element one by one and the second should use std::find

    std::cout << containsSeven_stdfind(numbers) << std::endl;


    std::cout << containsSeven(numbers) << std::endl;

    return 0;
}
