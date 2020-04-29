#include <string>
#include "circle.hpp"
#include <math.h>
#include <vector>
#include <iostream>

#define PI 3.14159265359

Circle::Circle(std::string n_colour, double n_x, double n_y, double n_radius) : Figure(n_colour, n_x, n_y){
    radius = n_radius;
}

Circle::~Circle(){
    std::cout << "Circle destructer" << std::endl;
}

void Circle::setRadius(double n_radius){
    radius = n_radius;
}

double Circle::getRadius(){
    return radius;
}

double Circle::area(){
    return PI * pow(radius, 2);
}

double Circle::perimeter(){
    return 2 * PI * radius;
}

bool Circle::intercept(Circle c2){
    double r2 = c2.getRadius();
    std::pair<double, double> ct1 = std::make_pair(x, y);
    std::pair<double, double> ct2 = c2.getXY();

    double sum_rad = r2 + radius;                       //Soma dos raios

    double dist = sqrt(pow(ct2.first - ct1.first, 2) + pow(ct2.second - ct1.second, 2));      //Distância entre os dois centros

    std::cout << "D = " << dist;
    
    if(dist > sum_rad)
        return true;
    else 
        return false;
}

std::ostream& operator << (std::ostream& os, const Circle& c){
    os << "Center: " << c.x << " " << c.y << std::endl;
    os << "Radius: " << c.radius << std::endl;
    os << "Color: " << c.color << std::endl << std::endl;
    return os;
}