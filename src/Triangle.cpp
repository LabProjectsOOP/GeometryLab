/*
 * Triangle.cpp
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */

#include "Triangle.h"
#include <cmath>

Triangle::Triangle(double sideA, double sideB, double sideC) : a(sideA), b(sideB), c(sideC) {}

double Triangle::getPerimeter() const {
    return a + b + c; // Формула периметру
}

double Triangle::getArea() const {
    double s = getPerimeter() / 2; // Півпериметр
    return std::sqrt(s * (s - a) * (s - b) * (s - c)); // Формула Герона
}



