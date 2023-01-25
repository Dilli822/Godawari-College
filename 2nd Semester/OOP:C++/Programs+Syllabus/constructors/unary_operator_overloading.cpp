// unary operator overloading for minus sign
// here -operator() takes no arguments but changes the sign as soon as it gets activated
#include <iostream>
using namespace std;

class Space{
    int x, y,z;
    public:
      void getData(int a, int b, int c);
      void display(void);
      // overload unary minus
      void operator-();
};

// accessing class Space void getData function
void Space:: getData(int a, int b, int c){
     x = a;
     y = b;
     z = c;
};

void Space:: display(void){
    cout << "x =" << x << " ";
    cout << "y = " << y << " ";
    cout << "z = " << z << " ";
};

void Space:: operator-(){
    x = -x;
    y = -y;
    z = -z;
};

int main() {
    // object creation of Class Space
    Space S;
    S.getData(10, -20, 30);
    cout << "S : ";
    S.display();
    cout << endl;
    cout << "Unary minus operator activated and we have overloaded operator for 20 or y variable value results in changing the sign " << endl;
    // activates operator -() function with - (minus) operator obj
    -S;
    cout << "-S: ";
    S.display();
    
    return 0;
}