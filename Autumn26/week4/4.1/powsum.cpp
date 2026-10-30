#include <iostream>
#include <cmath>

double compound (double x, double n);

int main () {
    double a,b;
    std::cout << "Base and power:" << std::endl;
    std::cin >> a >> b;
    std::cout << a << "powsum" << b << "=" << compound (a,b);
}

double compound (double x, double n){
    double tot = 0;
    for (int i = 1; i <= n; i++){
        tot = tot + std::pow(x,i);
    }
    return tot;
}