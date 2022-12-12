#include<iostream>
using namespace std;

// inline functions 
// syntax
// inline dataReturnType functionName(parameter){}
// inline function are written in single line which gets stored on memory once it is called 
/* unlike normal function it get stored in memory and gets triggerred as soon as compiler finds it.
   inline function executes faster and donot follow the primitive functions steps procedure.
*/
inline void add(int a, double b) { cout << a+b << endl; }

int main(){
    add(5,5.678);  // cout << 5 + 5.678 << endl;
    add(4,5.6767567);  // cout << 4 + 5.6767567 << endl;
    add(676767,8934.45454);   // cout << 676767+8934.45454 << endl;
    return 0;
}