#include<iostream>
using namespace std;

class MethoX{
    public:
    void printFunc(int a){
        cout << "a : " << a << endl;
    }

    void printFunc(string a){
        cout << "a : " << a << endl;
    }

    void printFunc(double a){
        cout << "a is " << a << endl;
     } 
};

int main(){
    MethoX obj;
    obj.printFunc(1);
    obj.printFunc("one");
    obj.printFunc(12.2222);
    return 0;
}