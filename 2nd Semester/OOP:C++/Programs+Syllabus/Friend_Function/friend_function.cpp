#include<iostream>
using namespace std;

class Distance{
    int meter;
    protected:
    string unit;

    // friend function
    friend int addFive(Distance);
    public:
      Distance() : meter(0){}
};

// friend function definition
int addFive(Distance d){
    // accessing private and protected members from the friend function
    d.meter += 5;
    d.unit = " meter";
    cout << d.meter << d.unit << endl;
}

int main(){
    Distance D;
    cout << "Distance: " << addFive(D) << endl;
    return 0;
}