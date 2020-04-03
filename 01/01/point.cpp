//~ point.cpp
//~ This file contains the implementation of the functions

#include <stdio.h>
#include <math.h>

#include "point.h"

void print(Point2D p) {
  printf("(%.1f, %.1f)", p.x, p.y );
}

Point2D ask(){
  Point2D p;

  printf("Enter a point: ");
  scanf("%lf", &p.x);
  scanf("%lf", &p.y);

  return p;
}

double distance(Point2D d){
  return sqrt(pow(d.x, 2) + pow(d.y, 2));
}