#include<iostream>
using namespace std;


// copy and assignment initialization
// friend function and static function in class
// class and function templates in c++
// virtual base class 
// virtual function as late binding
// virtual destructor
// abstract class and pure virtual function
// operator overloading in c++ -- binary and unary (++, --)
// this operator in c++

class Base{
    public:
    int x;
    Base(int x){
        this->x = x;
    }
    void show(){
        cout << "using this pointer in class points to the class " << this->x << endl;
    }
};
int main(){
    Base obj(3);
    obj.show();
    
    return 0;
}