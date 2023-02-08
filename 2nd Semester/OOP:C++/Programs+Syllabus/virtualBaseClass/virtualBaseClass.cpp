#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout << " base class A Constructor " << endl;
    }
    void display(){
        cout << " display " << endl;
    }
};

// SYNTAX IS EITHER VIRTUAL PUBLIC CLASSNAME OR PUBLIC VIRTUAL CLASSNAME
class B: public virtual A{

};

class C: virtual public A{

};

class D: public  B, public C{

};

int main(){
    D obj;
    obj.display();
    return 0;
}