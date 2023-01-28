#include <iostream>
#include<iomanip>
using namespace std;

// dynamic allocation with new and delete keyword
// inline function in c++
float x = 1.00;
float y = 23.11;
double a = 23.1;
double b = 12.2;


// pass and return by reference in c++
inline float add(float &x, float &y){
    return x + y;
}

inline double mul(double &a, double &b){
    return a * b;
}

int main() {
    int* num = new int; // dynamically allocate memory for an int
    *num = 5; // assign a value to the dynamically allocated memory
    cout << "The value of num is: " << *num << endl; // use the dereference operator to access the value stored in the dynamically allocated memory
    cout << showpoint << fixed << setprecision(2); 

    double *d = new double(3.14); // dynamically allocate memory for a double and initialize it with the value 3.14
    cout << "The value of (*d) d before delete is: " << *d << endl;
    delete num; // deallocate the dynamically allocated memory
    delete d; 

    cout << "The value of d after delete d is: " << *d << endl;
    cout << "The value of num after delete num is: " << *num << endl;

    cout <<"Inline function with pass by reference and return by reference." << endl;
    // cin >> x;
    // cin >> y;
    // cin >> a;
    // cin >> b;

    float sum = add(x,y);
    double product = mul(a,b);



    cout << "Sum of x and y: " << sum << endl;
    cout << "Product of x and y: " << product << endl;

    return 0;
}
