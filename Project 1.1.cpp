/*
Miles Brodie
CS20A -- Section 4452
Project #1.1

This program creates a Parent class Shape that constructs a width and height. The following
Child classes will set these variables and call a area() to calculate the area of the shape.
*/


#include <iostream>
using namespace std;


// Parent class
class Shape
{
public:
    int width;
    int height;

    Shape(){
    }

    void setWidth(int w){
        width = w;
    }

    void setHeight(int h){
        height = h;
    }
};

//Child class -- Rectangle
class Rectangle: public Shape
{
public:
    float area(){
        float area = (width * height);
        return area;
    }
};

//Child class -- Triangle
class Triangle: public Shape
{
public:
    float area(){
        float area = ((width * height) / 2);
        return area;
    }
};


int main()
{
    Rectangle r;
    r.setWidth(10);
    r.setHeight(20);
    float rArea = r.area();

    Triangle t;
    t.setWidth(10);
    t.setHeight(20);
    float tArea = t.area();

    cout << "Rectangle area = " << rArea << endl;
    cout << "Triangle area = " << tArea << endl;

    return 0;
}
