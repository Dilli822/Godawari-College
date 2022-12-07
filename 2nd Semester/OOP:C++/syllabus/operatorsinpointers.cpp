#include<iostream>
using namespace std;
int main(){
    int a = 5, *ptr;
    // Pointer operator in C++
    // * indirection operator
    // & is address operator

    ptr = &a;
    cout << "The value of a is " << a << "." << endl;
    cout << "The address of a is stored in ptr " << ptr << "." << endl;
    cout << "The value stored in address is: " << *ptr << "." << endl;

    return 0;
    
}