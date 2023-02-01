#include<iostream>
using namespace std;


class AbstractClass{
    // It is abstract class
    // if class has pure virtual function 
    // if derived class had not overriden the pure virtual function
    // abstract class cannot have normal obj but it can reference or poineter variable

    public:
       // this is ONLY VIRTUAL Function 
       virtual void error(){
          cout << "Something wrong happened!" << endl;
       }

       // this is pure virtual function as func is not defined
       virtual void status () = 0;
};

// derived class
class Status: public AbstractClass{
    public:
     int statusCode;
     void status(){
       (statusCode == 200) ? "okay!" : "something wrong error";
     }
};

// if not overrident it abstract class by itself
class Example: public AbstractClass{
};

int main(){
    AbstractClass *ptrObj;
    Status stObj;
    stObj.statusCode = 400;
    ptrObj = &stObj;
    ptrObj->status();

    return 0;
}