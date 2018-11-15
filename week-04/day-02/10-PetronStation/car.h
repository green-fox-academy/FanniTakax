//
// Created by malajabi on 11/14/2018.
//

#ifndef INC_10_PETRONSTATION_CAR_H
#define INC_10_PETRONSTATION_CAR_H


class Car {
public:
    Car(int gasAmount, int capacity);

    bool isFull();
    void fill();



private:
    int _gasAmount;
    int _capacity;

};


#endif //INC_10_PETRONSTATION_CAR_H
