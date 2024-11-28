/*
 * Triangle.h
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape {
private:
    double a, b, c; // Сторони трикутника
public:
    Triangle(double sideA, double sideB, double sideC);
    double getArea() const override;
    double getPerimeter() const override;
};

#endif

