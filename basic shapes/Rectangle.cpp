#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(int L, int W, string N)
{
	setName(N);
	length = L;
	width = W;
	calcArea();
}

void Rectangle::setL(int L)
{
	length = L;
}

void Rectangle::setW(int W)
{
	width = W;
}

int Rectangle::getW()
{
	return width;
}

int Rectangle::getL()
{
	return length;
}

void Rectangle::calcArea()
{
	double temp;
	temp = length * width;
	setArea(temp);
}
