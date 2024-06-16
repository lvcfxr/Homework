#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

using namespace std;

class Shape {
public:
    double area() const { return 0; }
    double perimeter() const { return 0; }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const {
        return PI * radius * radius;
    }

    double perimeter() const {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const {
        return width * height;
    }

    double perimeter() const {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
private:
    double a, b, c;
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() const {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double perimeter() const {
        return a + b + c;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    cout << "Circle area: " << circle.area() << ", perimeter: " << circle.perimeter() << endl;
    cout << "Rectangle area: " << rectangle.area() << ", perimeter: " << rectangle.perimeter() << endl;
    cout << "Triangle area: " << triangle.area() << ", perimeter: " << triangle.perimeter() << endl;

    return 0;
}
