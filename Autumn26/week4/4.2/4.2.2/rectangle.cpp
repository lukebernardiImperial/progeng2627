#include <iostream>

void pAndA(double s1, double s2, double& p, double& a){
    p = s1*2+s2*2;
    a = s1*s2;
}

int main (){
    double perimeter, area;

    pAndA(5, 5, perimeter, area);
    if (perimeter == 20 && area == 25){
        std::cout << "Success \n";
    }
    pAndA(10, 5, perimeter, area);
    if (perimeter == 30 && area == 50){
        std::cout << "Success \n";
    }
    pAndA(25, 1, perimeter, area);
    if (perimeter == 52 && area == 25){
        std::cout << "Success \n";
    }
}