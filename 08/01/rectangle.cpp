#include <string>
#include "rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(std::string n_colour, double n_x, double n_y, double n_w, double n_h) : Figure(n_colour, n_x, n_y){
    w = n_w;
    h = n_h;
}

Rectangle::~Rectangle(){
    std::cout << "Rectangle destructer" << std::endl;
}

void Rectangle::setWH(double n_w, double n_h){
    w = n_w;
    h = n_h;
}

std::pair<double, double> Rectangle::getWH(){
    return std::make_pair(w, h);
}

double Rectangle::area(){
    return w * h;
}

double Rectangle::perimeter(){
    return 2 * w + 2 * h;
}

std::ostream& operator << (std::ostream& os, const Rectangle& c){
    os << "Center: " << c.x << " " << c.y << std::endl;
    os << "Side: " << c.w << " " << c.h << std::endl;
    os << "Color: " << c.color << std::endl << std::endl;
    return os;
}