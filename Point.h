#pragma once
class Point
{
private:
    double x, y;
public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(double _x, double _y) {
        Init(_x, _y);
    }
    void Init(double _x, double _y);
    double get_x();
    double get_y();
    void  showDisplay();
    

    
};

