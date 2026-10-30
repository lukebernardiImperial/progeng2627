#include <iostream>

void myswap(double& a, double& b){

    double tmp;
    tmp = a;
    a = b;
    b = tmp;

}

void mysort(double& a, double& b, double& c){
    
    if (a>b){
        myswap(a, b);
    }
    if (b>c){
        myswap(b, c);
    }
    if (a>b){
        myswap(a, b);
    }

}

int main(){
    double n1, n2, n3;

    std::cout << "please enter three values" << std::endl;
    std::cin >> n1 >> n2 >> n3;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;

    mysort(n1, n2, n3);

    std::cout << "after SORTING the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
    std::cout << "n3: " << n3 << std::endl;

}