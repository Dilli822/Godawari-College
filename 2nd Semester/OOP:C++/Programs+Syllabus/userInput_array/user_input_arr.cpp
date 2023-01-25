#include<iostream>
using namespace std;

// global variable
int arr[5];
int inputSizeArray = sizeof(arr)/sizeof(arr[0]);

int inputArray(){
    // cout << inputSizeArray << endl;
    cout << "Enter numbers : " << endl;
    for(int i = 0; i < inputSizeArray; i++){
        cin >> arr[i];
    }
    return 0;
};

int largestArray(){
    for(int i = 0; i<inputSizeArray; i++){
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }

    cout << "Largest element in array is " << arr[0] << endl;
    return 0;
};

int smallestArray(){
    for(int i=0; i>inputSizeArray; i++){
        if(arr[0] > arr[i]){
            arr[0] = arr[i];
        }
    }
    return 0;
};

int main(){
    inputArray();
    largestArray();
    smallestArray();
    return 0;
}