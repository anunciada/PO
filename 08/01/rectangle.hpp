#include <string>
#include "figure.hpp"

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

class Rectangle : public Figure{
    protected : 
        double w, h;

    public : 
        Rectangle();
        Rectangle(std::string n_colour, double n_x, double n_y, double n_w, double n_h);
        ~Rectangle();
        void setWH(double n_w, double n_h);
        std::pair<double, double> getWH();
        double area();
        double perimeter();
        friend std::ostream& operator << (std::ostream&, const Rectangle& c);
};

#endif