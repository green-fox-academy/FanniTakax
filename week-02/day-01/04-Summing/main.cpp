#include <iostream>
#include <string>

int sum(int numbr);

int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer
    std::cout << sum(6);

    return 0;
}

int sum(int x){

    int ossz = 0;
    for(int i = 0; i < x; i++){
        ossz = ossz + i;
    }

    return ossz;

}