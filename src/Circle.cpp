/*
 * Circle.cpp
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */



#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

double Circle::getArea() const {
    return M_PI * radius * radius; // Формула площі
}

double Circle::getPerimeter() const {
    return 2 * M_PI * radius; // Формула периметру
}

