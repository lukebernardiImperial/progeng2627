#include <iostream>

int main (){
    double pounds, euros;

    std::cout << "How many pounds do you want to convert?" << std::endl;
    std::cin >> pounds;

    euros = pounds * 1.18;

    std::cout << pounds << " pounds is equal to " << euros << " euros.";
}