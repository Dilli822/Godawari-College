#include<iostream>
using namespace std;

class MyNumber {
    private:
        int value;
    public:
    // here int value is initialize first after that constructor will get initialized
    //value(v) part is known as an "initializer list", it's used to initialize the data members of the class before the constructor body is executed.
        MyNumber(int v) : value(v) {}
        //overloading the + operator
        //take a const reference to another MyNumber object as a parameter, which is the other operand in the binary operation.
        //The operator functions return a new MyNumber object with the result of the operation.
        MyNumber operator+(const MyNumber &other) {
            return MyNumber(value + other.value);
        }
        //overloading the * operator
        MyNumber operator*(const MyNumber &other) {
            return MyNumber(value * other.value);
        }
        void print() {
            cout << value << endl;
        }
};

int main() {
    MyNumber obj1(5);
    MyNumber obj2(10);
    MyNumber obj3 = obj1 + obj2;  //calls operator+ function
    MyNumber obj4 = obj1 * obj2;  //calls operator* function
    obj3.print();  //outputs 15
    obj4.print();  //outputs 50
    return 0;
}


//Also, in this case, the initializer list is providing a better performance than initializing the value inside the constructor body because initializer list allows the compiler to initialize the data members before executing the constructor's body.

//The part : value(v) is called initializer list, it is used to set the value of the data member value to the value of v before the constructor code is executed.

//In simple words, this line of code creates a constructor for the class MyNumber that assigns the value v to the data member value when an object of the class is created.