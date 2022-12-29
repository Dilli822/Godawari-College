#include<iostream> //MAXIMUM SIZE OF ARRAY 100
#define MAX_SIZE 100
using namespace std;

int main(){
    int arr[MAX_SIZE]; //Declares an array size
    int i, num;

    //Enter size of array
    cout << "Enter size of the array: " << endl;
    cin >> num;
    //Reading elements of array
    cout <<"Enter elements in array" << endl;

    for(int i =0; i<num; i++){
        cin >> arr[i];
    }

    cout << "All negative elements in array are: ";
    for(int i = 0; i<num; i++){
        // printing negative elements
        if(arr[i] < 0){
            cout << arr[i];
        }
    }
    return 0;
}