#include<iostream>
#include<string>
using namespace std;

// implicit and explicit data type conversion
// enum data type with conditional statement/switch case statement
int main(){
    int a = 34;
    string username = "10PEZE";
    // main differece betwen float and double is float is 32-bit IEEE 754 single precision while double is 64-bit IEEE 754 single precision
    float x = 23.56;
    double y = 34.7878;

    // enum data type in c++
    enum Direction{
        NORTH,
        SOUTH,
        EAST,
        WEST
    };
    Direction currentDirection = NORTH;
    switch (currentDirection)
    {
    case NORTH:
        cout << "NORTH" << endl;
        break;
    case SOUTH:
        cout << "SOUTH" << endl;
        break;
    case EAST:
        cout << "EAST" << endl;
        break;
    case WEST:
        cout << "WEST" << endl;
        break;
    
    default:
        break;
    }

    cout << "Examples of explicit type conversion." << endl;

    // conversion of int data type to double,float,string
    double doub_a = (double)a;
    float float_a = (float)a;
    string str_a = to_string(a);

    // conversion of string to int,float,double
    int intusername = stoi(username);
    double numusername = stod(username);
    float floatusername = stof(username);
    
    // conversion of float to int,string,double
    int intFloatX = static_cast<int>(x);
    string strFloatX = to_string(x);
    double doubFloatX = static_cast<double>(x);

    // conversion of double to int,string,float
    int intDoubY = static_cast<int>(y);
    string strDobY = to_string(y);
    float floatDobY = static_cast<float>(y);

    int m = 5 + 23.2323;
    cout << "Example of implicit type conversion. adding m = 5+23.2323 gives " << m  << endl;

    cout << "Checking the data types in c with typeid().name()" << endl;
    cout << typeid(intusername).name() << endl;
    cout << typeid(str_a).name() << endl << str_a << endl;
    cout << typeid(doub_a).name() << endl;

    return 0;
}