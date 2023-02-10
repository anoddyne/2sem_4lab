#pragma once
#include <string>
using namespace std;
class GeometryObj
{
protected:
	string name;
	string equation;
public:
	GeometryObj(string n, string eq);
	void setName(string n);
	void setEq(string eq);
	string getName();
	string getEq();
	virtual string Output() = 0;
};

