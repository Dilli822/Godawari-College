#include<iostream>
using namespace std;

class Formula{
    public:
     // remember this is pure virtual function as function is not defined but it has 0 assigned which is not value
     // Here assigned value is not 0 but  it whole syntax which makes it different from virtual function
     virtual double calculateArea () = 0;
};

class Square: public Formula{
    // pure virtual function beign overriden here
    public:
     double dimension;
     double calculateArea(){
        cout << dimension * dimension;
    }
};

// multi-level inheritance
class Circle: public Formula{
    // no need to write virtual to override the pure virtual function.
    
    public:
    double dimension;
     double calculateArea(){
        return dimension * dimension;
     }
};

int main(){
    // object creation
    Square sqObj;
    Circle crObj;

    sqObj.dimension = 1.5;
    crObj.dimension = 1;

    Formula *baseObj;
    Formula *baseObj2;

    baseObj = &sqObj;
    baseObj2 = &crObj;

    baseObj->calculateArea();
    cout << endl;
    // if we have used normal variable without reference we would just use . dot operator()
    cout << baseObj2->calculateArea();

    return 0;
}