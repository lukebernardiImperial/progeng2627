#include <iostream>

int main () {
    int x, n, nC, o = 1;

    std::cout << "What is your number and power?" << std::endl;
    std::cin >> x >> n;

    nC = n;

    while (n > 0){
        o = o * x;
        n--;
    }

    std::cout << x << " ^ " << nC << " = " << o;
}