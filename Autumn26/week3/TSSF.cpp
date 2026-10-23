#include <iostream>

int main (){
    int n = 0, a = 1;

    while (a != 0){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> a;

        n = n + a;

        std::cout << "The sum so far is: " << n << std::endl;
    }

}