#include <iostream>

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

int main() {
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;

    std::cout << "2^-3: " << mypow(2, -3) << std::endl;
    std::cout << "0.5^-2: " << mypow(0.5, -2) << std::endl;
    std::cout << "1^-0: " << mypow(1, -0) << std::endl;
}