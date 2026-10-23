#include <iostream>

int main (){
    double height, weight, bmi;

    std::cout << "How tall are you?" << std::endl;
    std::cin >> height;
    std::cout << "How much do you weight?" << std::endl;
    std::cin >> weight;
    
    bmi = weight / (height * height);
    std::cout << "Your BMI is: " << bmi;
}