#include<iostream>
using namespace std;
// class template with multiple and default parameters

template <class T, class U, class V = string>

class MyTemplate{
    private:
    T var1;
    U var2;
    V var3;

    // constructor
    public:
      MyTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3){}

      void printVar(){
        cout << " var 1 " << var1 << endl;
        cout << " var 2" << var2 << endl;
        cout << " var 3 " << var3 << endl;
      }
};

int main(){
    MyTemplate<int, double> obj1(23, 12.45, "character");
    cout << " obj1 with multiple int and double types " <<endl;
    obj1.printVar();

    MyTemplate<double,string,bool> obj2(1.2, "sddfd", false);
    cout << " obj2 with multiple templates data types " << endl;
    obj2.printVar();

    return 0;
}