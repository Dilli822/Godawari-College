#include<iostream>
using namespace std;

class Person{
    // using public access specifier
    public:
    // data members
    int age;
    string username;

    // constructor with the type default constructor
    Person(){
        cout << "By default class ,constructor gets auto called when class object is created!" << endl;
        cout << "everything gets printed which are inside the constructor" << endl;

        print();
    }

    // Copy constructor -- syntax classname (const classname ampersand objectname)
    Person(const Person &p) {
        username = p.username;
        age = p.age;
    }

    // member function in class
    void print(){
        cout << "hello from member function " << endl;
    }
};

// defining constructor outside the class
class Parent{
    // by default data members and data functions are private
    string surname;

    public:
    Parent();
    void Address(){
        cout << "address is nepal" << endl;
    }

};

Parent::Parent(){
    cout << " Constructor getting called outside the class!" << endl << "Enter your parents surname" << endl;
    cin >> surname;
    cout << "Your parent's surname is " << surname << endl;
    Address();
}

int main(){
    // class object create
    Person obj;
    Person cpContructorObj;
    cpContructorObj.username = "dilli";
    cout << cpContructorObj.username << endl;

    Parent parentObj;
    // // Copy parentObj to parentObj1 using the default copy constructor
    Parent parentObj1 = parentObj;
    
    return 0;
}