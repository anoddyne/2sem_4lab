#include "GeometryObj.h"

GeometryObj::GeometryObj(string n, string eq)
{
	this->name = n;
	this->equation = eq;
}

void GeometryObj::setName(string n)
{
	name = n;
}

void GeometryObj::setEq(string eq)
{
	equation = eq;
}

string GeometryObj::getName()
{
	return name;
}

string GeometryObj::getEq()
{
	return equation;
}
