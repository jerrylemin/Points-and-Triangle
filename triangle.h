#pragma once

#ifndef TRIANGLE
#define TRIANGLE

class Triangle 
{
private:
    Point A;
    Point B;
    Point C;
public:
    Triangle(Point A, Point B, Point C);
    void inputTri();
    void outputTri();
    bool isValidTriangle();
    void TriangleType();
    float Perimeter();
    float Area();
    void CenterG();
};

#endif
