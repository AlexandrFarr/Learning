#pragma once
class Manipulator
{

private:
	double x, y;
	double radius;

public:

	double getX();
	double getY();
	double getRadius();
	void setx(double cX);
	void setY(double cY);
	void setRadius(double cRadius);
	bool proverka(double cX, double cY);




};

