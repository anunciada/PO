#include <iostream>
#include <iomanip>
#include "shapes.hpp"

using namespace std;

int main(void){
    Point c1(0, 0), c2(-1, -10), c3(2, 2), c4(10, 0), c5(5, 2);

    square sq(c1, 4, "Blue");
    rectangle rt(c2, 1, 2);
    circle cr1(c3, 2, "Red");
    circle cr2(c4, 1);
    circle cr3(c5, 2);

    bool it1, it2; //interception of cr1 with cr2 AND cr1 with cr3

    it1 = cr1.intercept(cr2);
    it2 = cr1.intercept(cr3);

    vector<double> v1 = sq.getCenter().get();
    vector<double> v2 = rt.getCenter().get();
    vector<double> v3 = rt.getSide();
    vector<double> v4 = cr1.getCenter().get();
    vector<double> v5 = cr2.getCenter().get();
    vector<double> v6 = cr3.getCenter().get();

    cout << "Square:" << endl;
    cout << "Center: " << v1[0] << " " << v1[1] << endl; 
    cout << "Side: " << sq.getSide() << endl;
    cout << "Color: " << sq.getColor() << endl << endl;

    cout << "Rectangle:" << endl;
    cout << "Center: " << v2[0] << " " << v2[1]  << endl; 
    cout << "Side: " << v3[0] << " " << v3[1] << endl;
    cout << "Color: " << rt.getColor() << endl << endl;

    cout << "Circle 1:" << endl;
    cout << "Center: " << v4[0] << " " << v4[1]  << endl; 
    cout << "Side: " << cr1.getRadius() << endl;
    cout << "Radius: " << cr1.getRadius() << endl;
    cout << "Color: " << cr1.getColor() << endl << endl;

    cout << "Circle 2:" << endl;
    cout << "Center: " << v5[0] << " " << v5[1]  << endl; 
    cout << "Side: " << cr2.getRadius() << endl;
    cout << "Radius: " << cr2.getRadius() << endl;
    cout << "Color: " << cr2.getColor() << endl << endl;

    cout << "Circle 3:" << endl;
    cout << "Center: " << v6[0] << " " << v6[1]  << endl; 
    cout << "Side: " << cr3.getRadius() << endl;
    cout << "Radius: " << cr3.getRadius() << endl;
    cout << "Color: " << cr3.getColor() << endl << endl;

    if(it1)
        cout << "Circle 1 and circle 2 intercept" << endl;
    else
        cout << "Circle 1 and circle 2 don't intercept" << endl;

    if(it2)
        cout << "Circle 1 and circle 3 intercept" << endl;
    else
        cout << "Circle 1 and circle 3 don't intercept" << endl;

    return 0;
}