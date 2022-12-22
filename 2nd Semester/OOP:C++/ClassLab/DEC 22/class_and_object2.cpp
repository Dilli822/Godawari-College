#include<iostream>
using namespace std;

class Geeks {
    public:
    string geekname;
    int id;
    void printname();

    void printid(){
        cout << "Geek is is : " << id << endl;
    }
};

// definition of printname using scope resolution operator:: 
void Geeks:: printname(){
    cout << " Hello this is function defined from outside and it's name is :" << geekname << endl;
}
int main(){
    Geeks obj1;
    obj1.geekname = " Outside class definition ";
    obj1.id = 87576;

    //calling printname() function
    obj1.printname();
    cout << endl;

    // calling printid() function
    obj1.printid();

    return 0;
};