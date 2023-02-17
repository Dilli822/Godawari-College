#include<iostream>
using namespace std;

template <class T>
class MyClass{
    private: 
    T var;

    public:
    T MyFunction(T arg);
};

template<class T>
// creating a class template object
class Number{
    private:
    // variable of type T
    T num;

    public:
     Number(T n){
        num = n;
     } // constructor
    T getNum(){
        return num;
    }
};

int main(){
    // create objec
    Number <int> numberInt(34);
    Number <double> doubObj(34.23);

    cout << "int type class object is " << numberInt.getNum() << endl;
    cout << "double type class object is " << doubObj.getNum() << endl;
    return 0;
}