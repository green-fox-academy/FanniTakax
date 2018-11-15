#include <iostream>
#include <string>

int factoriol(int x);

int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   that returns it's input's factorial
    std::cout << factoriol(6);

    return 0;
}

int factoriol(int x){

    int ossz = 1;
    for(int i = 1; i < x; i++){
        ossz = ossz * i;
    }

    return ossz;

}