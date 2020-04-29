#include <string>
#include "figure.hpp"

#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

class Circle : public Figure{
    private : 
        double radius;

    public :
        Circle();
        Circle(std::string n_colour, double n_x, double n_y, double n_radius);
        ~Circle();
        void setRadius(double n_radius);
        double getRadius();
        double area();
        double perimeter();
        bool intercept(Circle c2);
        friend std::ostream& operator << (std::ostream&, const Circle& c);
};

#endif