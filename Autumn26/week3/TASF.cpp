#include <iostream>

int main (){
    int n = 0, a = 1;
    double avg = 0, total = 0;

    while (a != 0){
        std::cout << "Enter a number: " << std::endl;
        std::cin >> a;

        n++;
        total = total + a;

        avg = total/n;

        std::cout << "The average so far is: " << avg << std::endl;
    }

}