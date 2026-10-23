#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int c2 = 0;

    while(c2 < n){
        int c = 0;
        while(c < n){
            std::cout << "*"; 
            c++;
        }
        std::cout << std::endl;
        c2++;
    }

}