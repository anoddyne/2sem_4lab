#pragma once
#include "GeometryObj.h"
class Line : public GeometryObj
{
	double section[2], length;
public:
	Line(string n, string eq, double sec[2], double len);
	void setFirstEndpoint(double s1e);
	void setSecondEndpoint(double s2e);
	void setLength(double sl);
	double getFirstEndpoint();
	double getSecondEndpoint();
	double getLength();
	string Output() override;
};

