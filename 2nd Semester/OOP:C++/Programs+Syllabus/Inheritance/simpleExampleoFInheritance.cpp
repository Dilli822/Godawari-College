#include<iostream>
using namespace std;


// base or parent class or superclass 
class College{
    public:
     void library(){
        cout << "College has library." << endl;
     };
     void teachers(){
        cout << "College has teachers." << endl;
     }
};

// derived class  with syntax 
class NonGovCollege: public College {
    public:
     void Pension(){
        cout << "Teachers of government college gets pension after retiredment." << endl;
     }
};

int main(){
    // object create
    NonGovCollege college1;

    // calling object of the base class
    college1.library();
    college1.teachers();

    // calling derived
    college1.Pension();

    return 0;
}