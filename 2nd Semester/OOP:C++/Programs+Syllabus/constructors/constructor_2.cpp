#include<iostream>
using namespace std;

// defining the constructor outside the class 
// this is also default constructor 
class Student{
    int rno;
    char name[50];
    double fee;

    public:
    Student();
    void display();
};

// using resolution operator :: we can define the constructor outside the class
Student::Student(){
    cout << "Enter the Roll No: ";
    cin >> rno;
    cout << "Enter the Name: ";
    cin >> name;
    cout << "Enter the Fee: ";
    cin >> fee; 
}

void Student::display(){
    cout << endl << rno << "\t" << name << "\t" << fee;
};

int main(){
    Student object1;
    object1.display();
    return 0;
}