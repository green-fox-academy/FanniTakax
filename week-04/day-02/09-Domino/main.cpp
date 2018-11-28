#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

#include "domino.h"

std::vector<Domino> initializeDominoes()
{
    std::vector<Domino> dominoes;
    dominoes.push_back(Domino(5, 2));
    dominoes.push_back(Domino(4, 6));
    dominoes.push_back(Domino(1, 5));
    dominoes.push_back(Domino(6, 7));
    dominoes.push_back(Domino(2, 4));
    dominoes.push_back(Domino(7, 1));
    return dominoes;
}

int main(int argc, char* args[])
{
    srand(time(nullptr));

    std::vector<Domino> dominoes = initializeDominoes();
    std::vector<Domino> dominoes_2;
    
    dominoes_2.push_back(dominoes[rand() % dominoes.size()-1]);

    for (int i = 0; i < dominoes.size()-1; ++i) {
        for (int j = 0; j < dominoes.size(); ++j) {
            if(dominoes_2[i].getValues().second == dominoes[j].getValues().first){
                dominoes_2.push_back(dominoes[j]);
            }
        }
    }

    for (int k = 0; k < dominoes_2.size(); ++k) {
        std::cout << dominoes_2[k].toString() << ", ";
    }


    return 0;
}