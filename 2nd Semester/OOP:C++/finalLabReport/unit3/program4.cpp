#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    int y;
    void printValues() {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};

struct MyStruct {
    int x;
    int y;
    void printValues() {
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};

int main() {
    MyClass obj1;
    obj1.x = 5;
    obj1.y = 10;
    cout << "Class values:" << endl;
    obj1.printValues();

    MyStruct obj2;
    obj2.x = 7;
    obj2.y = 14;
    cout << "Struct values:" << endl;
    obj2.printValues();

    return 0;
}

/***
 * As you can see, the class and the struct have the same functionality, but there are some 
 * differences in terms of accessibility:

By default, the members of a class are private, meaning that they can only be accessed by the member 
functions of the class. While the members of a struct are public, meaning that they can be accessed
 from anywhere.
It's also possible to define a class or a struct as private, protected or public but 
the default accessibility for class is private and for struct is public.
In general, it's common to use classes for objects that have both data and 
behavior, while structs are used for objects that have mainly data and minimal behavior.

Also, structs were originally used to group data together, while classes 
were used to define objects with methods. But this distinction is not so
 clear cut anymore, and there is no real functional difference between 
 structs and classes, the main difference is the default accessibility.
 * 
*/

