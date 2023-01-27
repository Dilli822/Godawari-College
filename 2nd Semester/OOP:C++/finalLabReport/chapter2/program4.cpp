#include<iostream>
using namespace std;
// pointers and operators or operators in pointers
int main(){
    int x = 5;
    // pointer and ampersand operator
    int *ptr = &x;
    cout << "The address of x is: " << ptr << endl;
    cout << "The value of x is " << *ptr << endl;

    // pointer and array
    int arr[] = {1,2,3,4,5};
    int *arr_ptr = &arr[0];
    cout << "The value of current address array element is " << *arr_ptr << endl;

    // pointer and increment operator
    *arr_ptr++;
    cout << "The value of current address array element after adding increment operator is "  << *arr_ptr << endl;

    return 0;
}