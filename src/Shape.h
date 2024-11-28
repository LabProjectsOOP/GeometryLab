/*
 * Shape.h
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */

#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual double getArea() const = 0;     // Абстрактний метод для площі
    virtual double getPerimeter() const = 0; // Абстрактний метод для периметру
    virtual ~Shape() {}                     // Віртуальний деструктор
};

#endif
