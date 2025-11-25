#include "Circle.h"
using namespace std;

Circle::Circle(int x, int y, int r, string N)
{
	setName(N);
	xCenter = x;
	yCenter = y;
	radius = r;
	calcArea();
}

void Circle::setX(int x)
{
	xCenter = x;
}

void Circle::setY(int y)
{
	yCenter = y;
}

void Circle::setR(int r)
{
	radius = r;
}

int Circle::getX()
{
	return xCenter;
}

int Circle::getY()
{
	return yCenter;
}

int Circle::getR()
{
	return radius;
}

void Circle::calcArea()
{
	double temp;
	temp = radius ^ 2;
	temp = temp * 3.14;
	setArea(temp);
}