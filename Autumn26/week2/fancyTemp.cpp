#include <iostream>

int main (){
    double value, out;
    bool valid;
    std::string unit;
    
    std::cout << "Temperature:" << std::endl;
    std::cin >> value >> unit;

    if (unit == "C" || unit == "c"){
        out = (value * (9.0/5)) + 32;
        valid = true;
    }
    else if (unit == "F" || unit == "f"){
        out = (value - 32) / 9.0 * 5;
        valid = true;
    }
    else {
        valid = false;
    }

    if (valid){
        std::cout << "Converted value: " << out;
    }
    else{
        std::cout << "Invalid unit";
    }

}