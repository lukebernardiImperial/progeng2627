#include <iostream>

int main () {
    int a, b, c = 0, aC;

    std::cin >> a >> b;
    aC = a;

    while (a >= b){
        a = a - b;
        c++;
    }
    
    std::cout << aC << " divided by " << b << " results in " << c << "r" << a;
}