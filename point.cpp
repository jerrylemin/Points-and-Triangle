#include <iostream>
#include "point.h"

using namespace std;

Point::Point() {
    x = 0;
    y = 1;
}

Point::Point(int ix, int iy) {
    x = ix;
    if (iy != 0) {
        y = ix;
    }
    else {
        y = 1;
    }
}


void Point::inputPoint()
{
    cout << "Input x: "; cin >> this->x;
    cout << "Input y: "; cin >> this->y;
}

void Point::outputPoint()
{
    cout << "(" << this->x << "," << this->y << ")" << endl;
}

double Point::distance(Point B)
{
    return sqrt(pow((this->x - B.x), 2) + pow((this->y - B.y), 2));
}

int Point::distanceToOx()
{
    return this->y;
}

int Point::distanceToOy()
{
    return this->x;
}

//Point::~Point()
//{
//    cout << "Delete 2 points!" << endl;
//}
