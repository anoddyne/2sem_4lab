#pragma once
#include "GeometryObj.h"
#include <string>

class Figure : public GeometryObj
{
	double perimeter, area;
public:
	Figure(string n, string eq, double p, double a);
	void setPerimeter(double p);
	void setArea(double a);
	double getPerimeter();
	double getArea();
	string Output() override;
};

