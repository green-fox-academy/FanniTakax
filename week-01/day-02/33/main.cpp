#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores a number, and the user has to figure it out.
    // The user can input guesses, after each guess the program would tell one
    // of the following:
    //
    // The stored number is higher
    // The stried number is lower
    // You found the number: 8

    int myNum;
    int yourGuess;

    /*std::cout << "Now I type in my number. Don't look!" << std::endl;
    std::cin >> myNum;
    std::cout << std::endl;

     KIIRJA A myNum-ot, miutan beirtam....
     */
    myNum = 6;

    std::cout << "I thought about a number. Can you guess it? Type your guess here: " << std::endl;
    std::cin >> yourGuess;
    std::cout << std::endl;


    while(yourGuess != myNum){
        {if(yourGuess > myNum){
            std::cout << "It is less. Guess again: " << std::endl;
        }else if(yourGuess < myNum){
            std::cout << "It is more. Guess again: " << std::endl;
        }
        }
        std::cin >> yourGuess;
    }if(yourGuess == myNum){
        std::cout << "That's it, congrats:)" << std::endl;}




    return 0;
}