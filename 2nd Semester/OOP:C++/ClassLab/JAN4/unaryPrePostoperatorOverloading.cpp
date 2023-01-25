// Unary Pre Post and Operator Overloading
#include<iostream>
using namespace std;


class Count{
    private:
     int value;
    public:
     // constructor to initialize count to 5
     Count(){
        value = 5;
     }
    
    // overload ++ when used as prefix
    void operator ++(){
        ++value;
        //cout << "value from operator ++ is " << value << endl;
    }

    // overload ++ when used as postfix
    void operator ++(int){
        value++;
        //cout << "value from operator ++ int () is " << value << endl;
    }

    void display(){
        cout << "Count from display: " << value << endl;
    }
};

int main(){
    // object creation
    Count count1;

    // calling the "void operator ++int() function"
    count1++;
    
    count1.display();

    //calling the "void operator ++()" function
    ++count1;

    count1.display();

    return 0;
}
