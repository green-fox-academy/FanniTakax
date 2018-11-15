
#include <iostream>

    int main(int argc, char* args[]) {

        // Write a program that asks for a number.
        // It would ask this many times to enter an integer,
        // if all the integers are entered, it should print the sum and average of these
        // integers like:
        //
        // Sum: 22, Average: 4.4

        int num;
        std::cout << "Type a number: " << std::endl;
        std::cin >> num;

        std::cout << "type in " << num << " integers: " << std::endl;



        if(num != 0 && num > 0){
            int sum = 0;
            for(int i = 0; i < num; i++){
            int numb[i];
            std::cin >> numb[i];
            sum = sum + numb[i];}
            std::cout << "Thank you. Their sum is: " << sum << " and their avarage is: " << sum / num << std::endl;

        }else{
            std::cout << "I can not proceed with a negative number, or zero, what is nothing.";
        }




        return 0;
    }