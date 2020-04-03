#include <string>
#include <vector>

using namespace std;

class Point{
    double x, y;

    public:
        Point(double n_x,double n_y); 
        Point();
        void set(double n_x,double n_y);
        vector<double> get();
};

class circle{
    string color;
    Point center;
    double radius;

    public:
        //Constructors
        circle(double n_x, double n_y, double n_radius);
        circle(double n_x, double n_y, double n_radius, string n_color);
        circle(Point n_center, double n_radius);
        circle(Point n_center, double n_radius, string n_color);
        //Methods
        Point getCenter();
        string getColor();
        double getRadius();
        void setCenter(Point n_center);
        void setCenter(double x, double y);
        void setColor(string n_color);
        void setRadius(double n_radius);
        double area();
        double perimeter();
        bool intercept(circle c2);
};

class square{
    string color;
    Point center;
    double side;

    public:
        //Constructors
        square(double n_x, double n_y, double n_side);
        square(double n_x, double n_y, double n_side, string n_color);
        square(Point n_center, double n_side);
        square(Point n_center, double n_side, string n_color);
        //Methods
        Point getCenter();
        string getColor();
        double getSide();
        void setCenter(Point n_center);
        void setCenter(double n_x, double n_y);
        void setColor(string n_color);
        void setSide(double n_side);
        double area();
        double perimeter();
};

class rectangle{
    string color;
    Point center;
    vector<double> side;

    public:
       //Constructors
        rectangle(double n_x, double n_y, double n_side1, double n_side2);
        rectangle(double n_x, double n_y, double n_side1, double n_side2, string n_color);
        rectangle(Point n_center, double n_side1, double n_side2);
        rectangle(Point n_center, double n_side1, double n_side2, string n_color);
        //Methods
        Point getCenter();
        string getColor();
        vector<double> getSide();
        void setCenter(Point n_center);
        void setCenter(double n_x, double n_y);
        void setColor(string n_color);
        void setSide(double n_side1, double n_side2);
        void setSide(vector<double> n_side);
        double area();
        double perimeter();
};