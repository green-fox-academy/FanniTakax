#include <stdio.h>

/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/
typedef struct house {
    char * address;
    double price_EUR;
    int rooms;
    double area_m2;
}house_t;

int is_worthy(house_t* house1);
int worthy_houses_number(house_t * houses, int number);


int main()
{
  return 0;
}


int is_worthy(house_t* house1)
{
    double market_price = 400 * house1->area_m2;
    if(market_price > house1->price_EUR){
        return 1;
    }else{
        return 0;
    }
}

int worthy_houses_number(house_t * houses, int number)
{
    int counter = 0;
    for (int i = 0; i < number; ++i) {
        if(is_worthy(&houses[i]) == 1){
            counter++;
        }
    }

    return counter;
}