#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again

    int fiveNumbas[5];

    std::cout << "Yo, gimme five numbas: " << std::endl;
    std::cin >> fiveNumbas[0];
    std::cin >> fiveNumbas[1];
    std::cin >> fiveNumbas[2];
    std::cin >> fiveNumbas[3];
    std::cin >> fiveNumbas[4];

    int * fivePoint = fiveNumbas;

    for(int i = 0; i < sizeof(fiveNumbas)/sizeof(fiveNumbas[0]); i++){
        std::cout << *(fivePoint+i) << " ";
    }

    return 0;
}