#include <iostream>

int main () {
    int x, xC;

    std::cout << "Pick a number: " << std::endl;
    std::cin >> x;
    xC = x;

    for (int i = 1; i < xC; i++){
        x = x * (xC - i);
    }

    std::cout << xC << "! = " << x;
}