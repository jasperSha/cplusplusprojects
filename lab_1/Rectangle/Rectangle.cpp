#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() : width(1), height(1) {}
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

void Rectangle::setWidth(double w) { width = w; }
void Rectangle::setHeight(double h) { height = h; }

double Rectangle::getWidth() const { return width; }
double Rectangle::getHeight() const { return height; }

double Rectangle::getArea() const { return width * height; }
double Rectangle::getPerimeter() const { return 2 * (width + height); }
