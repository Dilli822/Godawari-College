#include<iostream>
using namespace std;

// declaration of template with typename K
template <class K>
K add(K num1, K num2, K num3){
    return (num1 * num2 * num3);
}

template <class X>
X func(X a, X b){
    return b;
}

int main(){
    double number;
    // variable = function templatename <datatype>(arguments of function templates)
    number = add<double>(1.15, 1.15, 1.15);

    cout << "Multiplicaition is: " << number << endl;
    return 0;
}
