#include<iostream>
using namespace std;

class base{
    private:
    int private_variable;

    protected:
    int protected_variable;

    public:
     base(){
        private_variable = 10;
        protected_variable = 99;
     }
    // friend function declaration
    friend void globalFriendFunction(base obj);
};

// friend function definition
void globalFriendFunction(base obj){
    cout << "Private Variable " << obj.private_variable << endl;
    cout << "Protected Variable " << obj.protected_variable << endl;
}


// driver code
int main(){
    base object1;
    globalFriendFunction(object1);
    return 0;
}