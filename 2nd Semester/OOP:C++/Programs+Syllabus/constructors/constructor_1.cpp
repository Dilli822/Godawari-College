#include<iostream>
using namespace std;

// constructor is invoked/called when class's object is created
class MyClass{
    public: // access specifier
    MyClass(){ // constructor as constructor has no return value and type
        cout << "Hello from MyClass Constructor!"; // comment or uncomment to see the invoke of constructor
    }
};


class Student{
    // bydefault the class data members and functions is private if access specifier is not declared inside the class
    int rno;
    char name[50];
    double fee;

    public:
    Student(){
        cout << "Enter Your Roll no: ";
        cin >> rno;
        cout << "Enter the Name: ";
        cin >> name;
        cout << "Enter the fee ";
        cin >> fee;
    }

    void display(){
        cout << endl << rno << "\t" << name << "\t"  << fee;
    }
};

int main(){
    MyClass myObj; // creation of object will call the contructor automatically
    Student myObj1;
    myObj1.display();
    return 0;
}
// Constructor and classname must be of same name 