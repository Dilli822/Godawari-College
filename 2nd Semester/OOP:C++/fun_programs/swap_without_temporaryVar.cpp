#include<iostream>
using namespace std;

void swap(int &a, int &b){
     a = a + b;
     b = a - b;
     a = a - b;

}

int main(){
    int x = 5;
    int y = 10;
    swap(x,y);
    cout << "for swap" << endl;
    cout << x << endl;
    cout << y << endl;
    cout << "for int main " << endl;

    x = x + y;
    x = x - y;
    y = x - y;
    cout << x << " " << y << endl;


    return 0;
}