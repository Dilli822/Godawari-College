// program to illustrate the working of objects and class in c++ programming
#include<iostream>
using namespace std;

// create a class
class Room {
    public:

    double length;
    double breadth;
    double height;

    double calculateArea(){
        return length * breadth;
    }

    double calculateVolume(){
        return length * breadth * height;
    }
};

int main(){
    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 23.2;
    room1.breadth = 23.3;
    room1.height = 19.4;

    //calculate and display the area and the volume of the room
    cout << "Area of Room = " << room1.calculateArea() << endl;
    cout << "Volume of Room = " << room1.calculateVolume() << endl;

    return 0;
};