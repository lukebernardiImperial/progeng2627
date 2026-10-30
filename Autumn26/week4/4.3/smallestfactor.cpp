#include <iostream>

int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
            return cf;
        }
    }
    return 0;
}

int main (){
    int cf;
    cf = smallest_factor(30);
    if (cf == 2){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
    cf = smallest_factor(95);
    if (cf == 5){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
    cf = smallest_factor(529);
    if (cf == 23){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
}