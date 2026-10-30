#include <iostream>

double higher (double a, double b){if (a<b){return b;}return a;}

int main () {
    double n1, n2;
    std::cin >> n1 >> n2;
    std::cout << higher(n1,n2);
}