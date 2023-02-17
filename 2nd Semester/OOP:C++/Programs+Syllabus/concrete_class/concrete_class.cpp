#include<iostream>
#include<string>
using namespace std;

class Abstract{
    private:
    string info;
    public:
    virtual void printContent() = 0;
};

// class concrete is class without virtual function but without virtual function
class Concrete{
    private:
    string info;

    public:
    Concrete(string s) : info(s) {}

    void printContent(){
        cout << "Concrete Object Information " << info << endl;
    }
};

int main(){
    string s;
    s = "Object creation date is 10:06 am";
    Concrete c(s);
    return 0;
}