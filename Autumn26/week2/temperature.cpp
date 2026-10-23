#include <iostream>

int main (){
    double celcius, fah;

    std::cout << "How many celcius is it?" << std::endl;
    std::cin >> celcius;

    fah = (celcius * 9.0/5) + 32;

    std::cout << "That temperature in fahrenheit is " << fah;
}