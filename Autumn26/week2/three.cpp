#include <iostream>

int main (){
    int num, rem;

    std::cout << "Input your number: ";
    std:: cin >> num;

    rem = num % 3;
    if (rem == 0){
        std::cout << num << " is divisible by 3";
    }
    else {
        std::cout << num << " is not divisible by 3";
    }
}