#include <iostream>

int main () {
    int x, xC, pow;

    std::cout << "Pick a number and the power: " << std::endl;
    std::cin >> x >> pow;
    xC = x;

    for (int i = 1; i < pow; i++){
        x = x * xC;
    }

    std::cout << xC << " ^ " << pow << " = " << x;
}