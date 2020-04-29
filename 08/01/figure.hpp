#include <string>

#ifndef FIGURE_HPP_
#define FIGURE_HPP_

class Figure{
    protected :
        std::string color;
        double x, y;

    public :
        Figure();
        Figure(std::string n_color, double n_x, double n_y);
        ~Figure();
        void setColor(std::string n_color);
        void setXY(double n_x, double n_y);
        std::string getColor();
        std::pair<double,double> getXY();
};

#endif