#include<iostream>
#define MAX_SIZE 100 // Maximum size of an array
using namespace std;

int main(){

    int arr[MAX_SIZE];
    int even[MAX_SIZE];
    int odd[MAX_SIZE];

    int evenCount, oddCount;
    int i,size;

    // Reading the size of the array
    cout << "Enter the size of the array ";
    cin >> size;

    // Reading elements in array
    cout << "Enter elements in the array ";
    
    for(int i = 0: i < size; i++){
        cin >> arr[i];
    }

    evenCount = 0;
    oddCount = 0;

    for(int i = 0; i<size; i++){
        // if arr[i] is odd
        if(arr[i] & 1){
            odd[oddCount] = arr[i];
            oddCount++;
        }else{
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    cout << "Elements of even array ";
    printArray(even, evenCount);

    cout << "Elements of odd array: ";
    printArray(odd, oddCount);

    return 0;



}
