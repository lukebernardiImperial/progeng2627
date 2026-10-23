#include <iostream>
#include <string>
#include <cmath>

int main () {
    double guess, lb, ub;
    lb = -100;
    ub = 100;
    guess = (lb + ub)/2;

    std::string ans = "";

    while (ans != "EQUAL" && ans != "E"){
        std::cout << "Is your number higher, lower or equal to: " << guess;
        std::cin >> ans;
        if (ans == "higher" || ans == "h"){
            lb = guess;
        }
        else if (ans == "lower" || ans == "l"){
            ub = guess;
        }
        guess = round((lb + ub)/2);
    }
    std::cout << "Your number is: " << guess;


}