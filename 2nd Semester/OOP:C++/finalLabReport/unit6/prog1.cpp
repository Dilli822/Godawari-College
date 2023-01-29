

/**
 * The null character indicates the end of the string. Such strings are called null-terminated strings.
 * In a catch block, the exception object is passed in the parenthesis. The type of this object is usually 
 * derived from the std::exception class and it contains a message that describes the error that occurred.

The const char *e in the catch parenthesis is used to catch the exception object and store its error 
message in the e variable. The cerr stream is then used to print the error message to the console.

The const char * data type is used because the error message is typically stored as a null-terminated 
string of characters. Using cerr instead of cout is a convention for printing error messages because
 cerr is unbuffered and messages written to it are immediately printed to the console, which is useful 
 for debugging or tracing errors.
 * The null terminated strings are basically a sequence of characters, and the last element is one
  null character (denoted by '\0').
*/

#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero is not allowed!"; // throwing an exception
    }
    return a / b;
}

int main() {
    int x = 10, y = 0;

    try {
        cout << divide(x, y) << endl; // function call which may throw an exception
    } catch (const char* msg) { // catching the exception
        cerr << msg << endl; // printing the error message
    }

    return 0;
}
