#pragma once

#ifndef POINT
#define POINT
class Point {
private:
    int x;
    int y;
public:
    Point();
    Point(int ix, int iz);
    void inputPoint();
    void outputPoint();
    double distance(Point B);
    int distanceToOx();
    int distanceToOy();
    /*~Point();*/
};


#endif
