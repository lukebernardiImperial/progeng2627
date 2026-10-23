#include <iostream>

int main(){
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if( (year % 4) == 0){ 
        if( (year % 100) == 0){
            if ( (year % 400) == 0){ // 400 case
                std::cout << "Leap year" << std::endl;
            }
            else{ // 100 case
                std::cout << "Not a leap year" << std::endl;
            }
        }
        else{ // 4 case
            std::cout << "Leap year" << std::endl;
        }
    }
    else{ // normal
        std::cout << "Not a leap year" << std::endl;
    }
}