#include <iostream>
#include "plant.h"
#include "flower.h"
#include "tree.h"
#include <vector>

int main() {

    std::vector<Plant> myGarden;
    Flower flower01(60, "yellow");
    Flower flower02(60, "blue");
    Tree tree01(60, "purple");
    Tree tree02(60, "orange");
    myGarden.push_back(flower01);
    myGarden.push_back(flower02);
    myGarden.push_back(tree01);
    myGarden.push_back(tree02);

    for (int i = 0; i < myGarden.size(); ++i) {
        if(myGarden[i].needWater()){
            std::cout << "The " << myGarden[i].getColor() << " "<< myGarden[i].getName() << " needs water." << std::endl;
        }else{
            std::cout << "The " << myGarden[i].getColor() << " "<< myGarden[i].getName() << " doesnt  need water." << std::endl;
        }
    }

    waterPlants(40, myGarden);




    return 0;
}
