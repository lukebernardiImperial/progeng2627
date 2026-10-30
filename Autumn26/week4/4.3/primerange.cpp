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
    int lb, ub;

    std::cout << "Lower and upper bounds \n";
    std::cin >> lb >> ub;

    for (int i = lb; i <= ub; i++){
        if (smallest_factor(i) == 0){//prime
            std::cout << i << "\n";
        }
    }
}