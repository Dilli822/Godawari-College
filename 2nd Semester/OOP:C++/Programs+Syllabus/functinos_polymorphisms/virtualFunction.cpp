#include<iostream>
using namespace std;

// non primitive data type
// class, union ,struct 

class Base{
    public:
    // comment and uncomment virtual void and void function to see how virtual function ensures correct function is called upon
    virtual void show(){
    //void show(){
        cout << "Hello from base" << endl;
    }
};

class SubClass1: public Base{
    public:
    void show(){
        cout << "Hello from subclass 1" << endl;
    }
};

class SubClass2: public Base{
    public:
    void show(){
        cout << "Hello from subclass 2" << endl;
    }
};

int main(){
    // class object creation
    SubClass1 obj1;
    SubClass2 obj2;

    Base normalObj;
    Base *baseObje = &normalObj;
    baseObje -> show();

    // data type and pointer or reference that points to SubClass Obj
    Base *baseObj= &obj1;
    baseObj ->show();

    Base *baseObj2 = &obj2;
    baseObj2 ->show();

    // virtual function ensures correct function is being called upon
    // we must have pointer or refernce to 
    
}

