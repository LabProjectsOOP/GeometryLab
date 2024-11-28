/*
 * Circle.h
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */

#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <cmath>

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r);
    double getArea() const override;
    double getPerimeter() const override;
};

#endif

