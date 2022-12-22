// C++ Program to read and print the details of a student using class program in c++ 
#include<iostream>
using namespace std;

class Student{
    char name[30];
    int rollNo;
    int total;
    float perc;

    public:
    void getDetails(void);
    void putDetails(void);
};

void Student::getDetails(void){
    cout << "Enter name:";
    cin >> name;
    cout << "Enter roll number:";
    cin >> rollNo;
    cout << "Enter total marks out of 500 :";
    cin >> total;

    perc = (float) total / 500*100;

}

// member function definition, outside of the class
void Student::putDetails(void){
    cout << "Student Details: \n";
    cout << "Name:"<< name << "" << " Roll Number:" << rollNo << "" << " Total:" << total << ""  << " Percentage:" << perc << "%" << endl;
}

int main(){
    // object creation
    Student std;
    std.getDetails();
    std.putDetails();
    return 0;
}