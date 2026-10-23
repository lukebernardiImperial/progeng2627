#include <iostream>

int main () {
    double n = -1, max = -1;

    std::cout << "Please give a number: " << std::endl;
    std::cin >> n;
    if (n > max){
        max = n;
    }
    std::cout << "Maximum so far: " << max << std::endl;

    while (n != 0){
    std::cout << "Please give a number: " << std::endl;
    std::cin >> n;
    if (n > max){
        max = n;
    }
    std::cout << "Maximum so far: " << max << std::endl;
    }
}