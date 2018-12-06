#include <stdio.h>

/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

typedef struct Sandwich {
    char name[20];
    float price;
    float weight;
} sandwich_t;

float sandwichPrice(sandwich_t sandwich, int howMany)
{
    float price = sandwich.price * (float)howMany;
    return price;
}

int main()
{

    return 0;
}