#include<iostream>
using namespace std;

template<class X, class Y>
void display(X a, Y b){
    cout << " a is " << a << " b is " << b << endl;
}
int main(){
    display(12,3);
    display('y', 12);
    display(2,67.8);
    return 0;
}