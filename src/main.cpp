/*
 * main.cpp
 *
 *  Created on: 28 лист. 2024 р.
 *      Author: user
 */

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

void displayMenu() {
    std::cout << "\nChoose a shape:\n";
    std::cout << "1. Circle\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cout << "0. Exit\n";
    std::cout << "Your choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1: {
            double radius;
            std::cout << "Enter the radius of the circle: ";
            std::cin >> radius;

            Circle circle(radius);
            std::cout << "Area: " << circle.getArea() << "\n";
            std::cout << "Perimeter: " << circle.getPerimeter() << "\n";
            break;
        }
        case 2: {
            double width, height;
            std::cout << "Enter the width and height of the rectangle: ";
            std::cin >> width >> height;

            Rectangle rectangle(width, height);
            std::cout << "Area: " << rectangle.getArea() << "\n";
            std::cout << "Perimeter: " << rectangle.getPerimeter() << "\n";
            break;
        }
        case 3: {
            double a, b, c;
            std::cout << "Enter the sides of the triangle (a, b, c): ";
            std::cin >> a >> b >> c;

            Triangle triangle(a, b, c);
            std::cout << "Area: " << triangle.getArea() << "\n";
            std::cout << "Perimeter: " << triangle.getPerimeter() << "\n";
            break;
        }
        case 0:
            std::cout << "Exiting...\n";
            break;

        default:
            std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}



