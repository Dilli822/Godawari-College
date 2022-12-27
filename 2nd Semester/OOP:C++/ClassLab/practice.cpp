#include<iostream>
using namespace std;


// class with public members and normal function
class Car{
    // making members public
    public:
    char model;
    char name;
    int year;
    float price;
    char warranty;

    // crating normal function here
    void doSomething(){
        cout << "hola" << endl;
    }

    int add(int a, int b){
        cout << (a + b) << endl;
        return 0;
    }

};

int main(){
    // creating object here
    Car carObj1;
    Car carCalcObj;
    carObj1.doSomething();
    carCalcObj.add(3,5);
    

    
    return 0;
}