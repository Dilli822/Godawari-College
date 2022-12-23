// types of constructors are :
/***
 *  1. default or zero-argument constructor
 *  2. Parameterized Constructor
 *  3. Copy Constructor
*/
#include<iostream>
using namespace std;

// Parameterized Constructor
class Car{
    public:
     string brand;
     string model;
     int year;
    Car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
    }
};

// Calling Parameterized Constructor outside the class

class Bike{
    public:
     string brand;
     string model;
     int rating;

    Bike(string j, string k, int l);
};

Bike::Bike(string j, string k, int l){
    brand = j;
    model = k;
    rating = l;
}

int main(){
    // Create Car objects and call the constructor with different values
    Car carObj1("Ford", "Mustang", 1969);
    Car carObj2("BMW", "X5", 1999);

    // Bike Class Object creation
    Bike bikeObj1("Yamaha", "FZ", 1995);
    Bike bikeObj2("Royal Enfield", "Bullet", 1975);

    // printing the values
    cout << carObj1.brand << " " << carObj2.model << " " << carObj1.year << endl;
    cout << carObj2.brand << "" << carObj2.model << " " << carObj2.year << endl;

    cout << bikeObj1.brand << " " << bikeObj1.model << " " << bikeObj1.rating << endl;
    cout << bikeObj2.brand << " " << bikeObj2.model << " " << bikeObj2.rating << endl;

    return 0;
}
