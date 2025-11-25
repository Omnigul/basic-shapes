#pragma once
#include "BasicShape.h"
using namespace std; 

class Rectangle : public BasicShape
{
public:
	Rectangle(int L, int W, string N);
	void setL(int L);
	void setW(int W);
	int getL();
	int getW();
	void calcArea();
private:
	int length;
	int width;
};

