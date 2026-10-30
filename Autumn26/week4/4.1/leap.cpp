#include <iostream>

bool leapYear(int year){
    bool out;
    if( (year % 4) == 0){ 
        if( (year % 100) == 0){
            if ( (year % 400) == 0){ // 400 case
                out = true;
            }
            else{ // 100 case
                out = false;
            }
        }
        else{ // 4 case
            out = true;
        }
    }
    else{ // normal
        out = false;
    }
    return out;
}

int main(){
    std::cout << (leapYear(1600) == true) << std::endl;
    std::cout << (leapYear(1700) == false) << std::endl;
}