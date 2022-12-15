#include<iostream>

using namespace std;

// global variable

int number;

// function declaration

int& retByRef(){
    return number;
}

int main(){
    //Function call for return by reference
    retByRef() = 2;
    // print number 
    cout << number;
    return 0;
}