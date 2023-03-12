#include<iostream>
using namespace std;


// late binding/runtime binding /dynamice binding happens at the runtime, virtual functions 
// early binding/compile-time binding happens at the complie time it is alos called static binding function overloading operator overloading

// binding means converting the identifiers ,variables into the address to store in the memory
// in case of function binding the correct function defined by compiler 

// -> is arrow oeprator used to access the members of structure and union used with pointer
// early binding means compiler directly heap into the address 
// late binding matches the right call function which identifies the kind of object

class Base{
    public:
    // late binding or dynamic binding 
    virtual void show(){
        cout <<"base" << endl;
    }
};
class Derived: public Base{
    public:
    void show(){
        cout << "derived" << endl;
    }

};

int main(){
    Base baseObj;

    Derived dervObj;

    Base *pObj = &dervObj;
    pObj ->show();


    return 0;
}