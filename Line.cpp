#include "Line.h"

Line::Line(string n, string eq, double sec[2], double len) : GeometryObj(n, eq)
{
	this->section[0] = sec[0];
	this->section[1] = sec[1];
	this->length = len;
}

void Line::setFirstEndpoint(double s1e)
{
	section[0] = s1e;
}

void Line::setSecondEndpoint(double s2e)
{
	section[1] = s2e;
}

void Line::setLength(double sl)
{
	length = sl;
}

double Line::getFirstEndpoint()
{
	return section[0];
}

double Line::getSecondEndpoint()
{
	return section[1];
}

double Line::getLength()
{
	return length;
}

string Line::Output()
{
	string output;
	output += "Линия: " + name + "\n";
	output += "Уравнение: " + equation + "\n";
	output += "Отрезок: [" + to_string(int(section[0])) + "; " + to_string(int(section[1])) + "] \n";
	output += "Длина: " + to_string(length) + "\n";
	return output;
}

