#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 3;
    // make the "a" variable's value bigger by 10
    a += 10;
    std::cout << a << std::endl;

    int b = 100;
    // make b smaller by 7
    b -= 7;

    std::cout << b << std::endl;

    int c = 44;
    // please double c's value
    c *= 2;

    std::cout << c << std::endl;

    int d = 125;
    // please divide by 5 d's value
    d /= 5;

    std::cout << d << std::endl;

    int e = 8;
    // please cube of e's value
    e *= e*e;


    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)

    bool bigger = f1 > f2;

    std::cout << std::boolalpha << bigger << std::endl;

    bool bigger2 = false;
        if (f1 > f2) {
            bigger2 = true;
        }

    std::cout << bigger2 << std::endl;


    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)

    bool biggerD = false;
        if ((g2 * 2) > g1){
            biggerD = true;
        }
    std::cout << biggerD << std::endl;





    int h = 135798745;
    // tell if it has 11 as a divisor (print as a boolean)

    bool divi = false;
        if (h % 11 == 0){
            divi = true;
        }
    std::cout << divi << std::endl;


    int i1 = 10;
    int i2 = 3;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)

    bool decide = false;
        if (i1 > (i2*i2) && i1 < (i2*i2*i2)){
            decide = true;
        }
    std::cout << decide << std::endl;




    int j = 1521;
    // tell if j is dividable by 3 or 5 (print as a boolean)

    bool threefive = false;
        if ((j % 3 == 0) || (j % 5 == 0)){
            threefive = true;
        }
    std::cout << threefive << std::endl;

    std::string k = "Apple";
    //fill the k variable with its content 4 times
    k += k+k+k;

    std::cout << k << std::endl;

    return 0;
}