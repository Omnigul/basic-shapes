#pragma once
#include <iostream>
using namespace std;

class BasicShape
{
public:
	void setArea(double);
	void setName(string);
	double getArea();
	string getName();
	virtual void calcArea() = 0;

private:
	double area;
	string name;
};

