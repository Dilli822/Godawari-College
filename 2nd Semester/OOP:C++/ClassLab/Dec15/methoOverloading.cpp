#include<iostream>
using namespace std;

void add(int a, double b){
    cout << "sum = " << (a+b) << endl;
}

void add(double a, int b){
    cout << "Sum = " << (a + b) << endl;
}

// Driver Code
int main(){
    add(10, 2.5);
    add(5.5, 6);
    return 0;
}