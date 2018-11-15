#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> makingMatches(const std::vector<std::string>& girls, const std::vector<std::string>& boys)
{
    std::vector<std::string> girlsC = girls;
    std::vector<std::string> boysC = boys;

    std::vector<std::string> planet;


    for(int i = 0; i < boysC.size(); ++i){
        planet.push_back(boysC[i]);
        for(int g = 0; g < girlsC.size(); ++g){
            planet.push_back(girlsC[i]);
        }
    }
    return planet;


}

int main(int argc, char* args[])
{
    std::vector<std::string> girls = {"Eve","Ashley","Claire","Kat","Jane"};
    std::vector<std::string> boys = {"Joe","Fred","Tom","Todd","Neef","Jeff"};

    // Write a method that joins the two lists by matching one girl with one boy into a new list
    // Exepected output: "Eve", "Joe", "Ashley", "Fred"...

    for(const auto& planet : makingMatches(girls, boys))
    {
        std::cout << planet << " ";
    }




    return 0;
}