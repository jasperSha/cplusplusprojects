#pragma once

using namespace std;

class Rectangle {

    private:
        double width, height;

    public:
        Rectangle();
        Rectangle(double w, double h);

        void setWidth(double w);
        void setHeight(double h);		

        double getWidth() const;
        double getHeight() const;	

        double getArea() const;
        double getPerimeter() const;

};
