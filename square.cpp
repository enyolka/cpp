#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
//#include "lab3_square.h"

//* definition *

// #ifndef UNTITLED1_LAB3_SQUARE_H
// #define UNTITLED1_LAB3_SQUARE_H


class Point{
    float x, y;
public:
    Point();
    Point(float, float);
    ~Point();
    float getX() const;
    float getY() const;
    void setX(float x1);
    void setY(float y);
    double distance(const Point &other) const;
};

class Square{
    Point p1, p2, p3, p4;
public:
    Square();
    Square(Point, Point, Point, Point);
    ~Square();
    float getArea();
    float getCircumference();
};

// #endif

//* main *

int main(int argv, char** argc){
    Point p1, p2(5,3), p3(5,6), p4(2,6);
    Square square(p1, p2, p3, p4);
    std::cout << "Pole = " << square.getArea() << " a obwod = " << square.getCircumference();

    std::cin.get();
}

//* declaration *

Point::Point(float x1, float y1){
    this->x = x1;
    this->y = y1;
}
Point::~Point(){};
Point::Point():x(0),y(0){}

float Point::getX() const{
    return x;
}
float Point::getY() const{
    return y;
}
void Point::setX(float x1){
    std::cout << "Podaj wspolrzedne x: ";
    std::cin >> x1;
}
void Point::setY(float y1){
    std::cout << "Podaj wspolrzedne y: ";
    std::cin >> y1;
}

double Point::distance(const Point &other) const{
    return sqrt(pow(getX()-other.getX(),2)) + pow(getY() - other.getY(),2);
}

//void Point::print(ostream *out) const {std::cout << "(" << x << "," << y << ")" << std::endl;}


Square::Square(){
    p1 = Point();
    p2 = Point();
    p3 = Point();
    p4 = Point();
}

Square::Square(Point P1, Point P2, Point P3, Point P4) {
    this->p1 = P1;
    this->p2 = P2;
    this->p3 = P3;
    this->p4 = P4;
}

float Square::getArea(){
    return p1.distance(p2) * p1.distance(p2);
}

float Square::getCircumference(){
    return p1.distance(p2) + p2.distance(p3) + p3.distance(p4) + p4.distance(p1);
}
Square::~Square(){}

