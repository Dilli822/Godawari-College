#include <iostream>
using namespace std;

// passing as class object function arguments
class MyClass {
public:
    int x;
    int y;
    int i;
    int j;

    void printValues() {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }

    void display() {
        cout << "i: " << i << endl;
        cout << "j: " << j << endl;
    }
};

void changeValues(MyClass& obj) {
    obj.x = 10;
    obj.y = 20;
}

MyClass createObject(int a, int b) {
    MyClass obj;
    obj.i = a;
    obj.j = b;
    return obj;
}

int main() {
    MyClass obj1;
    obj1.x = 5;
    obj1.y = 10;

    cout << "Original values:" << endl;
    obj1.printValues();

    changeValues(obj1);

    cout << "Changed values:" << endl;
    obj1.printValues();

    MyClass obj2 = createObject(345, 140);

    cout << "Objects returning from functions with original values:" << endl;
    obj2.display();

    return 0;
}

/** Passing object as function arguments
 * As you can see, the function changeValues is able to modify the values 
 * of the object passed as an argument, because it receives the object by reference, 
 * so any modification made to the object inside the function will be reflected outside the function.
--- Returning object from function
It's worth noting that when returning an object from a function, 
a copy of the object is made and returned by the function, 
this process is called copy elision, which is an optimization 
made by the compiler to avoid unnecessary copies, this can have
 an impact in performance if the object is big.
***/