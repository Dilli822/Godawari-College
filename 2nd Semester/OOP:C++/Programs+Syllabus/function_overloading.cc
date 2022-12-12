#include<iostream>
using namespace std;

int sum(int a, int b){
    cout << "Sum = " << (a +b) << endl;
    return 0;
}
int add(int a, int b){
    cout << "Sum = " << (a +b) << endl;
    return 0;
}

// rules for function overloading best practice in c++
// parameters should have different data types with alter sequences for eg:
// int add(int a, int b){ } and int add(int a, int b){ } this is bad example of functions overloading
// int add(int a, float b) {} and int add(float a, int b) this is correct example of functions overloading with alternate sequence of different datatypes 

int diff(int a, float b){
    cout << "diff is " << (a - b) << endl;
    return 0;
}

int diff(float a, int b){
    cout << "diff is " << (a - b) << endl;
    return 0;
}

// function overloading
int main(){
    sum(2,3);
    sum(23,4);

    diff(7,5.4);
    diff(4.5,5);

    return 0;
}


