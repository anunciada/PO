#include "shapes.hpp"
#include <string>
#include <math.h>

#include <iostream>
#include <iomanip>

const double pi = 3.14159265359;

//
//  class circle
//

//Constructors

circle::circle(double n_x, double n_y, double n_radius){
    center.set(n_x, n_y);
    radius = n_radius;
}

circle::circle(double n_x, double n_y, double n_radius, string n_color){
    center.set(n_x, n_y);
    radius = n_radius;
    color = n_color;
}

circle::circle(Point n_center, double n_radius){
    center = n_center;
    radius = n_radius;
}

circle::circle(Point n_center, double n_radius, string n_color){
    center = n_center;
    radius = n_radius;
    color = n_color;
}

//Methods

Point circle::getCenter(){
    return center;
}

string circle::getColor(){
    return color;
}

double circle::getRadius(){
    return radius;
}

void circle::setCenter(Point n_center){
    center = n_center;
}

void circle::setCenter(double n_x, double n_y){
    center.set(n_x, n_y);
}

void circle::setColor(string n_color){
    color = n_color;
}

void circle::setRadius(double n_radius){
    radius = n_radius;
}

double circle::area(){
    return pi * pow(radius, 2);
}

double circle::perimeter(){
    return 2 * pi * radius;
}

bool circle::intercept(circle c2){
    double r2 = c2.getRadius();
    vector<double> ct1 = center.get();
    vector<double> ct2 = c2.getCenter().get();

    double sum_rad = r2 + radius;                       //Soma dos raios

    double dist = sqrt(pow(ct2[0] - ct1[0], 2) + pow(ct2[1] - ct1[1], 2));      //Distância entre os dois centros

    cout << "D = " << dist;
    
    if(dist > sum_rad)
        return true;
    else 
        return false;
}

//
// class square
//

//Constructors

square::square(double n_x, double n_y, double n_side){
    center.set(n_x, n_y);
    side = n_side;
}

square::square(double n_x, double n_y, double n_side, string n_color){
    center.set(n_x, n_y);
    side = n_side;
    color = n_color;
}

square::square(Point n_center, double n_side){
    center = n_center;
    side = n_side;
}

square::square(Point n_center, double n_side, string n_color){
    center = n_center;
    side = n_side;
    color = n_color;
}

//Methods

Point square::getCenter(){
    return center;
}

string square::getColor(){
    return color;
}

double square::getSide(){
    return side;
}

void square::setCenter(Point n_center){
    center = n_center;
}

void square::setCenter(double n_x, double n_y){
    center.set(n_x, n_y);
}

void square::setColor(string n_color){
    color = n_color;
}

void square::setSide(double n_side){
    side = n_side;
}

double square::area(){
    return pow(side, 2);
}

double square::perimeter(){
    return side * 4;
}

//
// class rectangle
//

//Constructors

rectangle::rectangle(double n_x, double n_y, double n_side1, double n_side2){
    center.set(n_x, n_y);
    side = {n_side1, n_side2};
}

rectangle::rectangle(double n_x, double n_y, double n_side1, double n_side2, string n_color){
    center.set(n_x, n_y);
    side = {n_side1, n_side2};
    color = n_color;
}

rectangle::rectangle(Point n_center, double n_side1, double n_side2){
    center = n_center;
    side = {n_side1, n_side2};
}

rectangle::rectangle(Point n_center, double n_side1, double n_side2, string n_color){
    center = n_center;
    side = {n_side1, n_side2};
    color = n_color;
}

//Methods

Point rectangle::getCenter(){
    return center;
}

string rectangle::getColor(){
    return color;
}

vector<double> rectangle::getSide(){
    return side;
}

void rectangle::setCenter(Point n_center){
    center = n_center;
}

void rectangle::setCenter(double n_x, double n_y){
    center.set(n_x, n_y);
}

void rectangle::setColor(string n_color){
    color = n_color;
}

void rectangle::setSide(double n_side1, double n_side2){
    side = {n_side1, n_side2};
}

void rectangle::setSide(vector<double> n_side){
    side = n_side;
}

double rectangle::area(){
    return side[0] * side[1];
}

double rectangle::perimeter(){
    return 2 * side[0] + 2 * side[1]; 
}

//
// class Point
//

Point::Point(double n_x,double n_y){
    x = n_x;
    y = n_y;
}

Point::Point(){}

void Point::set(double n_x,double n_y){
    x = n_x;
    y = n_y;
}

vector<double> Point::get(){
    return {x, y};
}