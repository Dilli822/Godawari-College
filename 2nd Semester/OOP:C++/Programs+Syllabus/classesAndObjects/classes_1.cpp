// Class in C++
/** Class is a user-defined data type. User-defined are union, structure. Class hold it's data members and 
 * member functions, which can be accessed by used by creating an object of that class.
 * A C++ Class is a like a blueprint for an object. Data members are the data variables 
 * and member functions. Functions are the functions use to manipulate these variables and together
 * these data members and member functions defines the properties and behavious of the objects in the class.
*/
#include <iostream>
using namespace std;

class Laptops {
    char name;
    char memory;
    float price;
    double size;

    int programming();
    int videoPlaying();
};

Laptops Dell();
Laptops HP();
Laptops apple();
Laptops acer();


class Car{
    public:
    string brand;
    string model;
    int year;
};

int main(){
    Car Carobject1;
    Car Carobject2;

    Carobject1.brand = "BMW";
    Carobject1.model = "X6";
    Carobject1.year = 2005;

    Carobject2.brand = "Ford";
    Carobject2.model = "Mustang";
    Carobject2.year = 1999;

    cout << Carobject1.brand << " " << Carobject1.model << " " << Carobject1.year << endl;
    cout << Carobject2.brand << " " << Carobject2.model << " " << Carobject2.year << endl;
    return 0;
};
