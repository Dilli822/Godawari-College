#include <iostream>
using namespace std;
class Number {
    int value;

public:
   // Number(int v = 0) : value(v) {} use this or either use below Number() constructor code it's your choice
    Number(){
        value = 0;
    }
    Number(int v){
        value = v;
    }

    // Overloading unary operator ++
    Number& operator++ () {
        ++value;
        return *this;
    }

    // Overloading binary operator /
    Number operator/ (const Number& n) const {
        return Number(value / n.value);
    }

    int getValue() const { return value; }
};

int main() {
    Number a(5), b(10);

    // Using unary operator ++
    cout << (++a).getValue() << endl; // 6

    // Using binary operator /
    Number c = b / a;
    cout << c.getValue() << endl; // 2

    return 0;
}
