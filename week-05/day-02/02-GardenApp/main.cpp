#include <iostream>
#include <vector>
#include "garden.h"
#include "plants.h"
#include "tree.h"
#include "flower.h"


int main() {

    std::vector<Plants> garden;

    Flower flower01("yellow", 11);
    Flower flower02("blue", 11);
    Tree tree01("purple", 60);
    Tree tree02("orange", 60);

    garden.push_back(flower01);
    garden.push_back(flower02);
    garden.push_back(tree01);
    garden.push_back(tree02);

    Garden garden01(garden);

    garden01.water(40);


    return 0;
}