#include <iostream>
#include <string>

void reverseA(int array[], int size);

int main(int argc, char* args[]) {

    // - Create an array variable named `aj`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Reverse the order of the elements in `aj`
    // - Print the elements of the reversed `aj`


    int aj[5] = {3, 4, 5, 6, 7};

    reverseA(aj, 5);

    return 0;
}

void reverseA(int array[], int size){
    for(int i = size - 1; i >= 0; i -= 1){
        std::cout << array[i] << std::endl;
    }
}