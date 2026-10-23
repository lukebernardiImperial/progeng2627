#include <iostream>

int main() {
    double n1, n2, sum;

    std::cout << "First Number: ";
    std::cin >> n1;
    std::cout << "Second Number: ";
    std::cin >> n2;

    sum = n1+n2;

    std::cout << n1 << " + " << n2 << " = " <<  sum << std::endl;
}