#include <iostream>
#include "triangle.h"
#include "point.h"

using namespace std;

Triangle::Triangle(Point A, Point B, Point C) {
	this->A = A;
	this->B = B;
	this->C = C;
}

void Triangle::inputTri() {
	cout << "Point A: " << endl;
	A.inputPoint();
	

	cout << "Point B: " << endl;
	B.inputPoint();
	

	cout << "Point C: " << endl;
	C.inputPoint();
	
}

void Triangle::outputTri() {
	cout << "3 diem tam giac la: " << endl;

	cout << "A";
	A.outputPoint();

	cout << "B";
	B.outputPoint();

	cout << "C";
	C.outputPoint();

}

void Triangle::TriangleType()
{
}
