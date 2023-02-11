#include<iostream>
using namespace std;

class A{
    int a;
    public:
    int print(int a){
        a = a;
        cout << a << endl;
    }

    void show(){
        cout << "the value of a is " << a << endl;
    }
};

int main(){
    A obj;
    obj.print(1);
    obj.show();

    return 0;
}

