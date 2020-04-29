#include <string>
#include "rectangle.hpp"

#ifndef SQUARE_HPP_
#define SQUARE_HPP_

class Square : public Rectangle{
    private :
        double side;

    public :
        Square();
        Square(std::string n_colour, double n_x, double n_y, double n_s);
        ~Square();
        void setSide(double n_s);
        double getSide();
        double area();
        double perimeter();
        friend std::ostream& operator << (std::ostream&, const Square& c);
};

#endif