// C++ program to demonstrate accessing of data members
#include<iostream>
using namespace std;

class Geeks {
    public:
    string geekname;

    void printname(){ 
        cout << "My name is " << geekname << endl; 
    }
};

int main(){
    Geeks obj1;

    obj1.geekname = "Dilli Hang Rai ";
    obj1.printname();
    return 0;
}