#include <stdio.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type {VOLVO, TOYOTA, LAND_ROVER, TESLA};

typedef struct car {
    enum car_type type;
    double km;
    double gas;
}car_t;

void carInfo(car_t* car00)
{
    switch (car00->type) {
        case TESLA:
            printf("Type of the car: Tesla\nKilometers: %.1f\n", car00->km);
            break;
        case VOLVO:
            printf("Type of the car: Volvo\nKilometers: %.1f\nGas amount: %.2f\n", car00->km, car00->gas);
            break;
        case TOYOTA:
            printf("Type of the car: Toyota\nKilometers: %.1f\nGas amount: %.2f\n", car00->km, car00->gas);
            break;
        case LAND_ROVER:
            printf("Type of the car: Land Rover\nKilometers: %.1f\nGas amount: %.2f\n", car00->km, car00->gas);
            break;
    }
}


int main()
{
    car_t tesla;
    tesla.type = TESLA;
    tesla.km = 5000.52;
    carInfo(&tesla);

    car_t toyota;
    toyota.type = TOYOTA;
    toyota.km = 14275.15;
    toyota.gas = 100;
    carInfo(&toyota);

    return 0;
}