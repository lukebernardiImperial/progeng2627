#include <iostream>
#include <cmath>

double mypow (double x, double n) {
    double out = 1.0;

    if (n >= 0){
        for (int i = 0; i < n; i++){
            out = out * x;
        }
    }
    else{
        for (int i = 0; i > n; i--){
            out = out / x;
        }
    }

    return out;
}

double compound (double x, double n){
    double tot = 0;
    for (int i = 1; i <= n; i++){
        tot = tot + mypow(x,i);
    }
    return tot;
}

int main () {
    double a,b;
    std::cout << "Base and power:" << std::endl;
    std::cin >> a >> b;
    std::cout << a << "powsum" << b << "=" << compound (a,b);
}