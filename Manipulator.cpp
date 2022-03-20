#include "Manipulator.h"
#include <math.h>

double Manipulator::getX()
{
	return x;
}

double Manipulator::getY()
{
	return y;
}

double Manipulator::getRadius()
{
	return radius;
}

void Manipulator::setx(double cX)
{
	x = cX;
}

void Manipulator::setY(double cY)
{
	y = cY;
}

void Manipulator::setRadius(double cRadius)
{
	radius = cRadius;
}

bool Manipulator::proverka(double cX, double cY)
{
	if ( pow((x-cX ),2)+pow((y-cY),2)<=pow(radius,2)) {
		return true;
	}
	else
		return false;
}
