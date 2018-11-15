#include <iostream>

long long fibo(int n);

int main() {

    for(int i = 0; i < 23; i++){
        std::cout << fibo(i) << std::endl;
    }

    return 0;
}

long long fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return n = fibo(n-1) + fibo (n - 2);
    }
}