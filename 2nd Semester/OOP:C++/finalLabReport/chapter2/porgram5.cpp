#include <iostream>
using namespace std;

// storage class mutable,auto,local_varible,static variable
int global_var = 10; // global variable declared with extern storage class

int static_var = 20; // static variable

class MyClass {
    public:
    mutable int my_var;
    void change_var() const {
        my_var = 5; // this is allowed
    }
};

int main() {
    // this is not allowed in c++ 
    // register int loop_var; // register variable
    int loop_var;
    for (loop_var = 0; loop_var < 3; loop_var++) {
        global_var++; // increment global variable
        static_var++; // increment static variable
    }

    // this is invalid rather use int local_var
    //auto int local_var = 30; // auto variable
    int local_var = 30;
    // mutable is also not allowed use int mutable instead
    // mutable int mutable_var = 40; // mutable variable
    int mutable_var = 34;
    mutable_var++;

    cout << "global_var: " << global_var << endl; // prints "global_var: 13"
    cout << "static_var: " << static_var << endl; // prints "static_var: 23"
    cout << "local_var: " << local_var << endl; // prints "local_var: 30"
    cout << "mutable_var: " << mutable_var << endl; // prints "mutable_var: 41"
    return 0;
}
