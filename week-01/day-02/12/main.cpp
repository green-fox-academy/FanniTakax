#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double side1;
    std::cout << "enter Side n1 of the cuboid: ";
    std::cin >> side1;

    double side2;
    std::cout << "enter Side n2 of the cuboid: ";
    std::cin >> side2;

    double side3;
    std::cout << "enter Side n3 of the cuboid: ";
    std::cin >> side3;

    double surfaceA = 2*(side1*side2 + side2*side3 + side3*side1);
    double volume = side1*side2*side3;

    std::cout << "Surface area is: " << surfaceA << std::endl;
    std::cout << "Volume is: " << volume << std::endl;

    return 0;
}