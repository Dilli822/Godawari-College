#include<iostream>
using namespace std;

void add(int a, int b, int c=1, int d = 2, int e = 0){
    cout << (a + b +c + d + e) << endl;
}

int main(){
    add(3,4);
    add(1,2,2,2,2);
    add(3,4,5,2,4);
    return 0;
}



