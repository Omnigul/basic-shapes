#include "BasicShape.h"
using namespace std;

void BasicShape::setArea(double A)
{
	area = A;
}

void BasicShape::setName(string N)
{
	name = N;
}

double BasicShape::getArea()
{
	return area;
}

string BasicShape::getName()
{
	return name;
}