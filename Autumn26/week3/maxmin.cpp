#include <iostream>

int main () {
    double n = -1, max = -1000000, min = 1000000;

    std::cout << "Please give a number: " << std::endl;
    std::cin >> n;
    if (n > max){
        max = n;
    }
    if (n < min){
        min = n;
    }
    std::cout << "Maximum so far: " << max << std::endl;
    std::cout << "Minimum so far: " << min << std::endl;

    while (n != 0){
    std::cout << "Please give a number: " << std::endl;
    std::cin >> n;
    if (n > max){
        max = n;
    }
    if (n < min){
        min = n;
    }
    std::cout << "Maximum so far: " << max << std::endl;
    std::cout << "Minimum so far: " << min << std::endl;
    }
}