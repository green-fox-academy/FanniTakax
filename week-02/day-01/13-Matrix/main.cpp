#include <iostream>
#include <string>
void mattrix(int param);

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    mattrix(6);

    return 0;
}

void mattrix(int param){
    int multiA[param][param];
    for(int i = 0; i < param; i++){
        for(int j = 0; j < param; j++)
            if(i == j){
                multiA[i][j] = 1;
            }else{
                multiA[i][j] = 0;
            }
    }
    for(int i = 0; i < param; i++){
        for(int j = 0; j < param; j++){
            std::cout << multiA[i][j] << " ";
        }
        std::cout << std::endl;
    }
}