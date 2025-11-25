#include "Square.h"


Square::Square(int S, string N) :Rectangle(S,S,N)
{
	calcArea();
}

void Square::setS(int S)
{
	side = S;
}

int Square::getS()
{
	return side;
}