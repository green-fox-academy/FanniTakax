#include <iostream>

#include "station.h"
#include "car.h"

int main() {
    //In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.

    Station station(678);
    Car car01(6, 26);
    Car car02(13, 23);
    Car car03(4, 16);
    Car car04(10, 25);
    Car car05(9, 19);

    station.fill(car01);
    station.fill(car02);
    station.fill(car03);
    station.fill(car04);
    station.fill(car05);


    return 0;
}