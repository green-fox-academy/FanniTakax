#include <iostream>
#include "garden.h"
#include "plant.h"
#include "flower.h"
#include "tree.h"
#include <vector>

int main() {

    std::vector<Plant *> myGarden;
    Garden garden(myGarden);

    Flower flower01(2, "yellow");
    Flower flower02(2, "blue");
    Tree tree01(2, "purple");
    Tree tree02(2, "orange");
    myGarden.push_back(&flower01);
    myGarden.push_back(&flower02);
    myGarden.push_back(&tree01);
    myGarden.push_back(&tree02);

    for (int i = 0; i < myGarden.size(); ++i) {
        if(! myGarden[i]->needWater()){
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " doesnt  need water." << std::endl;
        }else{
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " needs water." << std::endl;
        }
    }

   garden.waterPlants(40, myGarden);

    for (int i = 0; i < myGarden.size(); ++i) {
        if(! myGarden[i]->needWater()){
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " doesnt  need water." << std::endl;
        }else{
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " needs water." << std::endl;
        }
    }

    garden.waterPlants(70, myGarden);

    for (int i = 0; i < myGarden.size(); ++i) {
        if(! myGarden[i]->needWater()){
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " doesnt  need water." << std::endl;
        }else{
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " needs water." << std::endl;
        }
    }
    


    return 0;
}
