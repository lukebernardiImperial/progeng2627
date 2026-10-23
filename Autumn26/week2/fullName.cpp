#include <iostream>

int main(){
    std::string first_name;
    std::string surname;

    std::cout << "What is your name?" << std::endl;
    std::cin >> first_name;

    std::cout << "What is your surname?" << std::endl;
    std::cin >> surname;

    std::cout << "Welcome " << first_name << " " << surname;
}