#include <iostream>
#include "BasicShape.h"
#include  "Rectangle.h"
#include  "Circle.h"
#include  "Square.h"
using namespace std;

int main()
{
	BasicShape *Shapes[5];
	Circle *cir1 = new Circle(1, 2, 4, "Harrold");
	Circle *cir2= new Circle(3, 5, 1, "Geoff");
	Rectangle *rec1 = new Rectangle(12, 2, "Steve");
	Rectangle *rec2= new Rectangle(100, 300, "Big Dave");
	Square *squ = new Square(9, "Scrunguls");

	Shapes[0] = cir1;
	Shapes[1] = cir2;
	Shapes[2] = rec1;
	Shapes[3] = rec2;
	Shapes[4] = squ;
	int counter = 0;
	while (counter <= 4)
	{
		cout << "Name: " << Shapes[counter]->getName() << endl << "Area: " << Shapes[counter]->getArea() << endl;
		counter++;
	}
}
