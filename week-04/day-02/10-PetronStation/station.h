//
// Created by malajabi on 11/14/2018.
//

#ifndef INC_10_PETRONSTATION_STATION_H
#define INC_10_PETRONSTATION_STATION_H
#include "car.h"

class Station {
public:
    Station(int gasAmount);

   void fill(Car &car);


private:
    int _gasAmount;
    int getGasAmount() const;

};


#endif //INC_10_PETRONSTATION_STATION_H
