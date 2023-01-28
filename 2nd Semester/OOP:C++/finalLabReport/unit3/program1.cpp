#include<iostream>
using namespace std;

// class and objects with constructor and destructor
class Vehicle {
    string make;
    string model;
    int year;
    int speed;

public:
    // Constructor with parameteized constructor
    Vehicle(string make, string model, int year) {
        // here make is pointing to string make which is private data member of class Vehicle and right side make is paremeter of Constructor
        this->make = make;
        this->model = model;
        this->year = year;
        this->speed = 0;
    }

    // Destructor
    ~Vehicle() {
        cout << "Destroying vehicle object" << endl;
    }

    // Function members
    void setMake(string make) {
        this->make = make;
    }

    void setModel(string model) {
        this->model = model;
    }

    void setYear(int year) {
        this->year = year;
    }

    string getMake() {
        return make;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate(int increase) {
        speed += increase;
    }

    void brake(int decrease) {
        speed -= decrease;
    }
};

int main() {
    // Create a vehicle object
    Vehicle car("Toyota", "Camry", 2020);

    // Print car's properties
    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;
    cout << "Speed: " << car.getSpeed() << endl;

    // Accelerate the car
    car.accelerate(20);
    cout << "Speed after acceleration: " << car.getSpeed() << endl;

    // Brake the car
    car.brake(10);
    cout << "Speed after braking: " << car.getSpeed() << endl;

    return 0;
}
