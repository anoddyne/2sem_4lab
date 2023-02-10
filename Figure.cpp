#include "Figure.h"
using namespace std;

Figure::Figure(string n, string eq, double p, double a) : GeometryObj(n, eq)
{
	this->perimeter = p;
	this->area = a;
}

void Figure::setPerimeter(double p)
{
	perimeter = p;
}

void Figure::setArea(double a)
{
	area = a;
}

double Figure::getPerimeter()
{
	return perimeter;
}

double Figure::getArea()
{
	return area;
}

string Figure::Output()
{
	string output;
	output += "������: " + name + "\n";
	output += "���������: " + equation + "\n";
	output += "�������� = " + to_string(perimeter) + "; ������� = " + to_string(area) + "; \n";
	return output;
}
