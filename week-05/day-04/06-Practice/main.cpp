#include <iostream>
#include <vector>

int getWhatTheyWant();

int main() {

   /* std::vector<std::string> vector1 = {"alma", "korte", "szilva"};
    std::vector<std::string> vector2 = {"labda", "konyv", "palcika"};
    std::vector<std::string> vector3 = {"cipo", "szoknya", "bakancs"};

    std::vector<std::vector<std::string>> newVector = {vector1, vector2, vector3};

    for (int i = 0; i < newVector.size(); ++i) {
        for (int j = 0; j < newVector[i].size() ; ++j) {
            std::cout << newVector[i][j] << ", ";
        }
        std::cout << std::endl;
    }*/

   int whatTheyWant;


   while(whatTheyWant != 4){
       whatTheyWant = getWhatTheyWant();
   }


    return 0;
}

int getWhatTheyWant(){
    int choice;

    std::cout << "1 - a" << std::endl;
    std::cout << "2 - b" << std::endl;
    std::cout << "3 - c" << std::endl;
    std::cout << "4 - d" << std::endl;

    std::cin >> choice;

    return choice;
}