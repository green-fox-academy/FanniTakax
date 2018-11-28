#include <iostream>
#include "garden.h"
#include "plant.h"
#include "flower.h"
#include "tree.h"
#include <vector>

void printMyGarden(std::vector<Plant *> myGarden);

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

    printMyGarden(myGarden);

   garden.waterPlants(40, myGarden);

    printMyGarden(myGarden);

    garden.waterPlants(70, myGarden);

    printMyGarden(myGarden);


    return 0;
}

void printMyGarden(std::vector<Plant *> myGarden){

    for (int i = 0; i < myGarden.size(); ++i) {
        if(! myGarden[i]->needWater()){
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " doesnt  need water." << std::endl;
        }else{
            std::cout << "The " << myGarden[i]->getColor() << " "<< myGarden[i]->getName() << " needs water." << std::endl;
        }
    }
};
