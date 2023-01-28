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

int main() {
    // Stack memory allocation
    MyClass obj1;
    obj1.x = 5;
    obj1.y = 10;
    cout << "Stack values:" << endl;
    obj1.printValues();

    // Heap memory allocation
    MyClass* obj2 = new MyClass();
    obj2->x = 7;
    obj2->y = 14;
    cout << "Heap values:" << endl;
    obj2->printValues();

    // Deallocate heap memory
    delete obj2;
    obj2 = nullptr;

    return 0;
}

/**
 * This program defines a class MyClass with two data members x and y, 
 * and a member function printValues that prints the values of x and y.
In the main function, an object of the class is created using stack memory 
allocation and another object is created using heap memory allocation.

Stack memory allocation:
The object obj1 is created on the stack, which is a memory area that is 
automatically managed by the program. Stack memory is limited and fast, but the o
bjects created on the stack have a shorter lifetime than objects created on the heap, 
they are destroyed when the program exits the block where they were created.
Heap memory allocation:
The object obj2 is created on the heap, which is a memory area that is dynamically
 managed by the program. Heap memory is slower but has a larger capacity than stack memory. 
 The objects created on the heap have a longer lifetime than objects created on the stack, 
 they are only destroyed when the program calls the delete operator.

 * As you can see, the objects created on stack memory and heap memory are the same, but they 
 have different lifetimes.
It's important to keep in mind that when you allocate memory dynamically you need to deallocate 
it manually by calling the delete operator and set the pointer to nullptr so it's not pointing 
to garbage memory location.

Also it's worth to mention that C++11 and later introduces smart pointers which are a good way 
to manage dynamic memory allocation, for example unique_ptr and shared_ptr which handle 
deallocation of memory automatically and help to prevent memory leaks.*
 * 
 * 
*/