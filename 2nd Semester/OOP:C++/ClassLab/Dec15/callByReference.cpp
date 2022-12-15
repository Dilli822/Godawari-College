#include<iostream>
using namespace std;

int main(){
    // local variable declaration
    int a = 100;
    int b = 200;

    cout << "Before swap, value of a: " << a << endl;
    cout << "Before swap, value of b: " << b << endl;

    /*** Calling a function to swap the values using variable reference */

    swap(a, b);

    cout  << "After swap, value of a: " << a << endl;
    cout << "After swap, value of b: " << b << endl;

    return 0;
}