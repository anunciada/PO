//~ ex1.cpp
//~ This file contains the main program

#include <stdio.h>
#include <math.h>

#include "point.h"

int main() {
  //~ Testing module functions:
  Point2D d, max;
  double dist, distTotal = 0, distMax = 0;
  int count = 0;

  do{
    d = ask();
    if(d.x != 0 || d.y != 0){
      count++;
      dist = distance(d);
      if(dist > distMax){
        distMax = dist;
        max = d;
      }
      distTotal += dist;
    }
  }while(d.x != 0 || d.y != 0);

  printf("Number of points entered: %d\n", count);
  printf("Sum of distances to the origin: %lf\n", distTotal);
  printf("Furthest point from the origin: ");
  print(max);
  printf("\n");
  
  return 0;
}
