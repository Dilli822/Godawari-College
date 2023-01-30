#include <iostream>
using namespace std;

// shape is abstract class with pure virtual function
class Shape {
public:
    virtual double area() = 0; // allows double area() method overridden in derived class
};

// concrete class are rectange and circle
class Rectangle: public Shape {
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {}
    double area() { return width * height; }
};

class Circle: public Shape {
    int radius;
public:
    Circle(int r) : radius(r) {}
    double area() { return 3.14159 * radius * radius; }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Rectangle(10, 5);
    shapes[1] = new Circle(3);

    for (int i = 0; i < 2; i++) {
        // shapes[i]-> pointing to area() method of rectangle and circle sub class,thus called late binding
        cout << "Shape " << i + 1 << ": " << shapes[i]->area() << endl;
    }
    return 0;
}
