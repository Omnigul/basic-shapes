#pragma once
#include "Rectangle.h"
#include <iostream>
using namespace std;

class Square : public Rectangle
{
public:
	Square(int S, string N);
	void setS(int S);
	int getS();
private:
	int side;
};

