#include "Point.h"
#include <iostream>
using namespace std;

void Point::Init(double _x, double _y)
{
    x = _x;
    y = _y;
   
}

double Point::get_x()
{
    return x;
}

double Point::get_y()
{
    return y;
}

void Point::showDisplay()
{
    cout << " x= " << x << " y= " << y << endl;;

}
