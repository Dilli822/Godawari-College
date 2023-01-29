#include <iostream>
using namespace std;

// Base class
class Shape {
    public:
        Shape() {
            cout << "Shape constructor called." << endl;
        }
        ~Shape() {
            cout << "Shape destructor called." << endl;
        }
};

// Derived class
class Rectangle : public Shape {
    public:
        Rectangle() {
            cout << "Rectangle constructor called." << endl;
        }
        ~Rectangle() {
            cout << "Rectangle destructor called." << endl;
        }
};

int main() {
    // Creating an object of the derived class
    Rectangle rect;
    return 0;
}
