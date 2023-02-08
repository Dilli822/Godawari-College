#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout << " Constructor of Base Class is called " << endl;
    }

    // normal destructor
    // use virtual ~Base() to prevent memory leakage
    ~Base(){
        cout << "Normal Destructor of Base Class is called" << endl;
    }
};

class Child: public Base{
    public:
    Child(){
        cout << "Constructor of Child Derived Class is called" << endl;
    }

    ~Child(){
        cout << "Nprmal Destructor of Child Derived Class is called" << endl;
    }
};


int main(){
    // initializing the object of Child class
    Child *ch = new Child();
    Base *b = ch;
    delete b;
    return 0;
}

/**
 * Constructor of Base Class is called 
Constructor of Child Derived Class is called
Normal Destructor of Base Class is called

Here memory leakage due to late binding the pointer object points to base
// failed to clear the child destructor
 * virtual destructor will destruct the child object first and then only destroy memory allocated for base in second turn.
*/
