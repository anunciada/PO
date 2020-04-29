#include <iostream>
#include "circle.hpp"
#include "rectangle.hpp"
#include "square.hpp"

struct point{
    double x, y;
};
 
int main(){
    point c1 = {0, 0};
    point c2 = {-1, -10};
    point c3 = {2, 2};
    point c4 = {10, 0};
    point c5 = {5, 2};

    Square sq("Blue", c1.x, c1.y, 4);
    Rectangle rt("", c2.x, c2.y, 1, 2);
    Circle cr1("Red", c3.x, c3.y, 2);
    Circle cr2("", c4.x, c4.y, 1);
    Circle cr3("", c5.x, c5.y, 2);

    bool it1, it2; //interception of cr1 with cr2 AND cr1 with cr3

    it1 = cr1.intercept(cr2);
    it2 = cr1.intercept(cr3);


    std::cout << "Square:" << std::endl;
    std::cout << sq;

    std::cout << "Rectangle:" << std::endl;
    std::cout << rt;

    std::cout << "Circle 1:" << std::endl;
    std::cout << cr1;

    std::cout << "Circle 2:" << std::endl;
    std::cout << cr2;

    std::cout << "Circle 3:" << std::endl;
    std::cout << cr3;

    if(it1)
        std::cout << "Circle 1 and circle 2 intercept" << std::endl;
    else
        std::cout << "Circle 1 and circle 2 don't intercept" << std::endl;

    if(it2)
        std::cout << "Circle 1 and circle 3 intercept" << std::endl;
    else
        std::cout << "Circle 1 and circle 3 don't intercept" << std::endl;

    return 0;
}