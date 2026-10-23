#include <iostream>

int main(){
    int n, counter = 0;

    std::cout << "How many repeats? ";
    std::cin >> n;

    while(counter < n){
        std::cout << counter << std::endl;
        counter = counter + 1;
    }
}