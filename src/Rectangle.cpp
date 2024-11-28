/*
 * Rectangle.cpp
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */

#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::getArea() const {
    return width * height; // Формула площі
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height); // Формула периметру
}



