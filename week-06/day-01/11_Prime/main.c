#include <stdio.h>
#include <stdlib.h>

int isPrime(int x)
{
    int o = 0;
    for (int i = 2; i < x; ++i) {
        if(x % i != 0) {
            o = 1;
        }else if(x % i == 0){
            o = 0;
            break;
        }
    }
    if(o == 1){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    // Create a program which asks for a number and stores it
    // Create a function which takes a number as a parameter
    // and returns 1 if the number is a prime number and 0 otherwise
    // (in this case 0 is not considered as a prime number)

    int num;
    printf("Enter a positive integer:\n");
    scanf("%d", &num);

    if(isPrime(num) == 1){
        printf("The number is a prime!");
    }else{
        printf("The number is NOT a prime...");
    }

    return 0;
}