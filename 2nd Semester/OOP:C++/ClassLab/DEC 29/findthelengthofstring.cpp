#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
    string str = "C++ Programming";
    string gar = "/0";
    cout << typeid(gar).name() << endl;
    cout << "String Length is " << str.size();
    return 0;
}