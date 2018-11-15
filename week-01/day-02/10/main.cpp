#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string

    std::string nevem = "Fanni";

    // Your age as an integer

    int korom = 26;

    // Your height in meters as a double

    double magassagoMeterben = 1.70;

    // Whether you are married or not as a boolean

    bool hazassag = false;

    std::cout << nevem << std::endl;
    std::cout << korom << std::endl;
    std::cout << magassagoMeterben << std::endl;
    std::cout << std::boolalpha << hazassag << std::endl;

    return 0;
}