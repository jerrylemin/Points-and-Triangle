#include <iostream>

#include "point.h"
#include "triangle.h"
#include <conio.h>

using namespace std;

int main() {
	Point pt1, pt2;

	cout << "Point 1: " << endl;
	pt1.inputPoint();
	pt1.outputPoint();

	cout << "Point 2: " << endl;
	pt2.inputPoint();
	pt2.outputPoint();

	double distance = pt1.distance(pt2);
	cout << "Distance between 2 points: " << distance << endl;
	
	//int distanceToOx = pt1.distanceToOx();
	cout << "Point 1 to 0x: " << pt1.distanceToOx() << endl;
	cout << "Point 1 to 0y: " << pt1.distanceToOy() << endl;
	cout << "Point 2 to 0x: " << pt2.distanceToOx() << endl;
	cout << "Point 2 to 0y: " << pt2.distanceToOy() << endl;

	Point ptA, ptB, ptC;

	Triangle tri;

	tri1.inputTri();

	return 0;


}