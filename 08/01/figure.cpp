#include <string>
#include <iostream>
#include "figure.hpp"

Figure::Figure(std::string n_color, double n_x, double n_y){
    color = n_color;
    x = n_x;
    y = n_y;
}

Figure::~Figure(){
    std::cout << "Figure destructer" << std::endl;
}

void Figure::setColor(std::string n_color){
    color = n_color;
}

void Figure::setXY(double n_x, double n_y){
    x = n_x;
    y = n_y;
}

std::string Figure::getColor(){
    return color;
}

std::pair<double,double> Figure::getXY(){
    return std::make_pair(x,y);
}