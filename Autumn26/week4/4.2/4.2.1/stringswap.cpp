#include <iostream>
#include <string>

void myswap(std::string& a, std::string& b){

    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;

}

int main(){
    std::string w1, w2;

    std::cout << "Enter two strings" << std::endl;
    std::cin >> w1 >> w2;

    std::cout << "Initial:" << std::endl;
    std::cout << "w1: " << w1 << std::endl;
    std::cout << "w2: " << w2 << std::endl;

    myswap(w1, w2);

    std::cout << "After:" << std::endl;
    std::cout << "w1: " << w1 << std::endl;
    std::cout << "w2: " << w2 << std::endl;
}