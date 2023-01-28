#include <iostream>
using namespace std;

// pass by reference and return by reference
int &getMax(int &a, int &b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

// pointer and function 
void increment(int *value) { // function that increments the value pointed to by the pointer
    (*value)++;
}

int main() {
    int x = 5, y = 10;
    int &result = getMax(x, y);
    cout << "Reference is just another name of variable : " << endl << "Pass by reference and return by reference " << endl;
    // & indicates we are using reference which also means int &a means we are assigning reference 
    // when variable is being passed and by passing reference we are passing by it's memory address rathen than it's value
     
    cout << "The greater value is: " << result << endl;

    int number = 10;
    int *ptr = &number; // ptr is a pointer that stores the address of the variable number

    increment(ptr); // call the increment function, passing the address of number through the pointer

    cout << "number: " << number << endl; // prints "number: 11"
    return 0;
}


