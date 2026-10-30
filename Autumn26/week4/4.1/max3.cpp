#include <iostream>

double higher (double a, double b, double c){
    double h = 0;
    if (a>b){h = a;}
    else {h = b;}
    if (c>h){h = c;}
    return h;
}

int main () {
    double n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;
    std::cout << higher(n1,n2,n3);
}