
// copy constructor
// classname (const classname &obj){
//     // body of contructor
// }

// direction intialization or assignment operator (syntax)
// classname Obj1, Obj2;
// Obj2 = Obj1

#include<iostream>
using namespace std;

class Example {
    int x, y;
    public:
    Example(int a, int b){
        x = a;
        y = b;
    }

    // copy constructor
    Example(Example & ex){
        x = ex.x;
        y = ex.y;
    }

    void display(){
        cout << x << " " << y << endl;
    }
};

int main(){
    Example obj1(20, 30); //Normal Constructor
    Example obj2 = obj1; // copy Constructor assigned to copy constructor
    cout << "Normal Constructor: " ;
    obj1.display();
    cout << "Copy Constructor: " ;
    obj2.display();
    return 0;
}