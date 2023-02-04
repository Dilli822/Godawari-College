#include<iostream>
using namespace std;

// global variable
int a;

// we use & with an object for return by reference
int &pass();

int main(){
    // passing 34 value means same as int a = 34;
    pass() = 34;
    cout << a;
    return 0;
}

int &pass(){
    return a;
}

// return by reference means passing pointer to an object 
/*
 Returning by reference in C++ means returning a pointer to
 an object, instead of a copy of the object. This allows multiple 
 functions to access and modify the same object, avoiding the overhead 
 of copying large objects. To return a reference, use the & 
 operator before the object you want to return.
 
 When you return by reference in C++, you return a reference (i.e., a pointer) 
 to the original object, rather than a copy of it. This means that any changes 
 made to the returned object will be reflected in the original object as well, 
 because they both refer to the same memory location.

*/ 