#include <iostream>

bool leap_year(int year){
    bool ly;

    if( (year % 4) == 0){ 
        if( (year % 100) == 0){
            if ( (year % 400) == 0){ // 400 case
                ly = true;
            }
            else{ // 100 case
                ly = false;
            }
        }
        else{ // 4 case
            ly = true;
        }
    }
    else{ // normal
        ly = false;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    bool nextMonth = false, nextYear = false;
    d2 = d1;
    m2 = m1;
    y2 = y1;
    if (m1 == 2){ //feb
        if (leap_year(y1) && d1 == 29){ //leap
            nextMonth = true;
        }
        else if (!leap_year(y1) && d1 == 28){ //not leap
            nextMonth = true;
        }
    }
    else if (((m1 == 1 || m1 == 3 || m1 == 4 || m1 == 7 || m1 == 8 || m1 == 10) && (d1 == 31)) || ((m1 == 5 || m1 == 6 || m1 == 9 || m1 == 11) && (d1 == 30))) { //end of 31 day month or 30 day month (not dec)
        nextMonth = true;
    }
    else if (m1 == 12 && d1 == 31){ //new year
        nextYear = true;
    }

    if (nextYear){
        y2++;
        d2 = 1;
        m2 = 1;
    }
    if (nextMonth){
        m2++;
        d2 = 1;    
    }
    if (!(nextYear || nextMonth)){
        d2++;
    }
}

int main(){
    int d2, m2, y2;

    next_date(1,1,2000,d2,m2,y2);
    if (d2 == 2 && m2 == 1 && y2 == 2000){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
    next_date(29,2,2000,d2,m2,y2);
    if (d2 == 1 && m2 == 3 && y2 == 2000){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
    next_date(28,2,2001,d2,m2,y2);
    if (d2 == 1 && m2 == 3 && y2 == 2001){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
    next_date(30,7,2020,d2,m2,y2);
    if (d2 == 31 && m2 == 7 && y2 == 2020){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
    next_date(6,6,2020,d2,m2,y2);
    if (d2 == 7 && m2 == 6 && y2 == 2020){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}
    next_date(31,12,2020,d2,m2,y2);
    if (d2 == 1 && m2 == 1 && y2 == 2021){
        std::cout << "Success \n";
    } else {std::cout << "Fail \n";}

}