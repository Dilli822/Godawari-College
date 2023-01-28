#include<iostream>
using namespace std;

class MyClass {
    public:
        static int counter;  //static data member
        MyClass() {
            counter++;
        }
        static int getCounter() {  //static function
            return counter;
        }

        void normalFunction();
};

int MyClass::counter = 0;  //initialize the static data member
void MyClass::normalFunction(){
    cout << "I am function member redefined outside the class" << endl;
};

int main() {
    MyClass obj1;
    MyClass obj2;
    cout << "Counter: " << MyClass::getCounter() << endl;
    obj1.normalFunction();
    return 0;
}
