#include<iostream>
using namespace std;

// example of showing the need of forward declaration with class
// coment class ClassB to see the need of forward declaration
class ClassB; // forward declaration

class ClassA {
    public:
    ClassA(): numA(12) {}
    private:
    int numA;

    // friend function declaration
    friend int add(ClassA, ClassB);
};

class ClassB{
    public:
    ClassB(): numB(8) {}

    private:
    int numB;

    // friend function declaration
    friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objA, ClassB objB){
    return (objA.numA + objB.numB);
}

int main(){
    ClassA objectA;
    ClassB objectB;
    cout << " Summ is " << add(objectA, objectB);
    return 0;
}