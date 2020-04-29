#include <string>
#include "square.hpp"
#include <iostream>

Square::Square(std::string n_colour, double n_x, double n_y, double n_s) : Rectangle(n_colour, n_x, n_y, n_s, n_s){
    side = n_s;
}

Square::~Square(){
    std::cout << "Square destructer" << std::endl;
}

void Square::setSide(double n_s){
    side = n_s;
}

double Square::getSide(){
    return side;
}

double Square::area(){
    return w * h;
}

double Square::perimeter(){
    return 2 * w + 2 * h;
}

std::ostream& operator << (std::ostream& os, const Square& c){
    os << "Center: " << c.x << " " << c.y << std::endl;
    os << "Side: " << c.w << std::endl;
    os << "Color: " << c.color << std::endl << std::endl;
    return os;
}