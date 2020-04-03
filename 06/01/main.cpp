#include <iomanip>
#include <iostream>
#include "time.hpp"

using namespace std;

int main(void){
    Time t_1(), t_2(1, 48, 34), t_3(10, 10, 10);            //Instatiation of 3 Time objects

    t_3.addTime(t_2);                                       //Adding t_2 to t_3

    t_3.dispTime();                                         //Showing t_3 in terminal

    std::cout << endl;
}