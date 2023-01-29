//aggrregation in c++
#include <iostream>
using namespace std;

class Engine {
public:
int power;
public:
Engine(int p) {
power = p;
cout << "Engine has been created with power of: " << power << endl;
}
~Engine() {
cout << "Engine with power of " << power << " has been destroyed." << endl;
}
};

class Car {
private:
string name;
Engine *engine;
public:
Car(string n, int p) {
name = n;
engine = new Engine(p);
cout << "Car " << name << " has been created with engine of power " << p << endl;
}
~Car() {
cout << "Car " << name << " has been destroyed." << endl;
delete engine;
}
};

int main() {
Car *c = new Car("Mercedes", 200);
delete c;
return 0;
}

/*
Output:
Engine has been created with power of: 200
Car Mercedes has been created with engine of power 200
Car Mercedes has been destroyed.
Engine with power of 200 has been destroyed.


This program shows an example of aggregation in C++. In this example, the class "Engine" is being used by the class "Car" but they have separate lifetimes. The "Car" class creates an object of the "Engine" class and uses it, but when the "Car" object is destroyed, it also deletes the "Engine" object it was using. In this way, the "Car" class is said to aggregate the "Engine" class. This example also demonstrates the use of constructors and destructors in derived classes.
*/