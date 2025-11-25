#pragma once
#include <iostream>
#include "BasicShape.h"
using namespace std;

class Circle : public BasicShape
{
public:
	Circle(int x, int y, int rad, string N);
	void setX(int);
	void setY(int);
	void setR(int);
	int getX();
	int getY();
	int getR();
	void calcArea();
private:
	int xCenter;
	int yCenter;
	int radius;
};

