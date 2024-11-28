/*
 * Rectangle.h
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h);
    double getArea() const override;
    double getPerimeter() const override;
};

#endif

