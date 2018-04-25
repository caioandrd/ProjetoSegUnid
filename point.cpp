#include "point.h"
#include <cmath>
#include <iostream>

using namespace std;

Point::Point(float _x, float _y){
    x = _x;
    y = _y;
}
void Point::setX(float _x)
{
    x = _x;
}

void Point::setY(float _y)
{
    y = _y;
}
void Point::setXY(float _x, float _y)
{

    x = _x;
    y = _y;
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

Point Point::add(Point p1)
{
    Point ret;
    ret.x = x + p1.x;
    ret.y = y + p1.y;
    return (ret);
}

Point Point::sub(Point p1)
{
    Point ret;
    ret.x = x - p1.x;
    ret.y = y - p1.y;
    return (ret);
}

float Point::norma()
{
        return sqrt(x*x + y*y);
}

Point Point::translada(float a, float b)
{
    Point ret;
    ret.x = x + a;
    ret.y = y + b;
    return ret;
}

void Point::imprime()
{
   cout << "(" << x << "," << y << ")";
}

