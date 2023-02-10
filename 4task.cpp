//Задача 4, вариант 5, Бесшапошников Владимир
//Базовый класс – Геометрический элемент, производные классы – Линия, Фигура.

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Line.h"
#include "Figure.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	string name, equation;
	double length, section[2], perimeter, area;

	GeometryObj* gob;

	ifstream fin;
	fin.open("lines.txt");
	cout << "Линии" << endl;
	while (!fin.eof()) {
		fin >> name >> equation >> section[0] >> section[1] >> length;
		// конструктор, заданный с указанием значений для инициализации полей
		Line* lin = new Line(name, equation, section, length);

		gob = lin;

		cout << gob->Output() << endl;
	}
	fin.close();
	cout << "Фигуры" << endl;
	fin.open("figures.txt");
	while (!fin.eof()) {
		fin >> name >> equation >> perimeter >> area;
		Figure* fig = new Figure(name, equation, perimeter, area);

		gob = fig;

		cout << gob->Output() << endl;
	}
	fin.close();
	system("pause");
}
