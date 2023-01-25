#include <iostream>
using namespace std;
/** Notes
 * This C++ program defines a class called "complex" which represents a complex number 
 * with a real and an imaginary part. The class defines a constructor that initializes 
 * the real and imaginary parts of the complex number, and it also overloads the "+" 
 * operator to add two complex numbers together. The operator overload function "operator+"
 * is a member function of the class which takes in another complex number object as an argument
 * and returns a new complex number object which is the sum of the two complex numbers
*/
class complex{
    // real part
    float x;
    float y;
    
    public:
     // constructor 1
     complex(){}
     complex(float real, float imag){
         x = real; 
         y = imag;
     }
     complex operator+(complex);
     void display(void);
};

complex complex:: operator+(complex c){
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return(temp);
}

void complex::display(void){
    cout << x << " + j" << y << endl;
};

int main() {
    complex C1,C2,C3;
    C1 = complex(2.5, 3.6);
    C2 = complex(1.5, 2.8);
    C3 = C1 + C2;
    
    C1.display();
    C2.display();
    C3.display();
    
    return 0;
}