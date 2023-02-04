#include<iostream>
using namespace std;

// global variable declaration
int num;

// call by value
int swap(int a, int b){
    int c = a;
    a = b;
    b = c;
}

// call by reference
int swappy(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

// return by reference
int &pass();

int &passed(int &x, int &y){
    return (x > y) ? x : y;
}

// return by reference
int main(){
    int first_num = 1, second_num = 2;
    cout << "Call by Value " << endl;
    cout << "|| Before Swapping " << endl;
    cout << "first number " << first_num << " | " << "second num " << second_num << endl;
    swap(first_num, second_num);
    cout << "|| After Swapping " << endl;
    cout << "first number " << first_num << " | " << "second num " << second_num << endl;
    cout << "-------------------------" << endl;
    cout << "Call by Reference or pass by reference " << endl;
    cout << "|| Before Swapping " << endl;
    cout << "first number " << first_num << " | " << "second num " << second_num << endl;
    swappy(first_num, second_num);

    cout << "|| After Swapping " << endl;
    cout << "first number " << first_num << " | " << "second num " << second_num << endl;

    cout << "----------------------------------------" << endl;
    pass() = 5;
    cout << "No global num value is : " << num << endl; 
    cout << endl;
    cout << passed(first_num, second_num);
    
    return 0;
}

int &pass(){
    return num;
};

/***
 * Returning by reference in C++ means returning a reference (i.e., a pointer)
 *  to an object, rather than a copy of the object. This is useful when returning 
 * a large object as it can avoid the overhead of copying the object, 
 * and allow multiple functions to manipulate the same object. 
 * To return a reference in C++, you need to use the reference
 *  operator & before the object you want to return:
 * 
 * 
 * Pass by reference in C++ means passing a reference (i.e., a pointer) to an object, 
 * rather than a copy of the object, as an argument to a function. This allows 
 * multiple functions to access and modify the same object, avoiding the 
 * overhead of copying large objects. To pass by reference, use the 
 * reference operator & before the argument:
 * 
 * In this example, the swap function takes two integer references 
 * a and b and swaps their values. When the values of a and b are 
 * changed inside the function, the changes are reflected in the 
 * caller as well, since the references refer to the original objects:
 * 
 * 
 * In C++, "call by value" is a method of passing arguments to a function,
 *  where a copy of the value of the argument is made and passed to the 
 * function, rather than the original argument. The function operates 
 * on this copied value, and any changes made to the argument within 
 * the function do not affect the original argument outside of the function.
*/