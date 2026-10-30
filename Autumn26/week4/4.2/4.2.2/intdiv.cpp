#include <iostream>

void intdiv (int a, int b, int& c, int& d){
    c = a/b;
    d = a%b;
}

int main (){
    int c, d;
    intdiv(10,3,c,d);
    if (c == 3 && d == 1){
        std::cout << "Success \n";
    }
    intdiv(12,3,c,d);
    if (c == 4 && d == 0){
        std::cout << "Success \n";
    }
    intdiv(9,5,c,d);
    if (c == 1 && d == 4){
        std::cout << "Success \n";
    }
}