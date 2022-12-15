#include<iostream>
using namespace std;
void print(int i){
    cout << " Here is int " << i << endl;
}

void print(double f){
    cout << "Here is double " << f << endl;
}

void print(char const * c){
    cout << " Here is char * " << c << endl;
}

int main(){
    print(12);
    print(23.33);
    print("Ten");
    return 0;
}

