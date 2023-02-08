#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout << "Normal Constructor of A" << endl;
    }
    void display(){
        cout << "Hello from display function." << endl;
    }
};

class B: public A{

};

class C: public A{

};

class D: public B, public C{

};

int main(){
    D obj;
    obj.display(); // error due to ambigious
    return 0;
}