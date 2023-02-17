#include<iostream>
using namespace std;

// syntax is
// try {
    // block of code to try
    // throw expection 
    // always we put the code in try that we want to executed
//}
//catch(){
    // Block of code to handle errors
//}
//try catch always comes in pair

int main(){

    try{
        int age = 17;
        if(age >= 18){
            cout << "Access granted - You are old enough" << endl;
        } else{
            throw(age);
        }
    }
    // throw comes here as catch = throw(age = ageNum)
    catch(int ageNum){
        cout << "Access denied - You must be at least 18 years old " << endl;
        cout << "Your age is Just: " << ageNum << endl;
    }

    return 0;

}