#include<iostream>
using namespace std;

class Parent{
    public:
    Parent(){
        cout << "Normal Constructor of Parent is called " << endl;
    }

    // this will prevent memory leakage
    virtual ~Parent(){
        cout << "virtual destructor of parent is called " << endl;
    }
};

class Derived: public Parent{
    public:
    Derived(){
        cout << " Normal Constructor of derived class is called " << endl;
    }

    ~Derived(){
        cout << " Destructor of Derived class is called out " << endl;
    }
};

int main(){
    
    Derived *obj = new Derived;
    Parent *pObj = obj;
    // first child destructor is invoked and then only base destructor in invoked
    delete pObj;

    return 0;
}