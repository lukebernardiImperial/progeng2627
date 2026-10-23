#include <iostream>

int main(){
    double s1, s2;

    std::cout << "Input length of the first side: ";
    std::cin >> s1;
    std::cout << "Input length of the second side: ";
    std::cin >> s2;

    std::cout << "Perimeter = " << s1*2 + s2*2 << std::endl;
    std::cout << "Area = " << s1*s2;
}