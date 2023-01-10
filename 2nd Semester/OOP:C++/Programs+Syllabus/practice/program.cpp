#include<iostream>
using namespace std;

// global variable
int arr[5];
int check_input;

int largestArray(){
    for(int i = 0; i<5; i++){
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }

    cout << "Largest element in array is " << arr[0] << endl;
    return 0;
}

int reverseArray(){
    // cout << "Array elements are " << endl;

    // for(int i = 0; i<5; i++){
    //     cout << arr[i] << endl;
    // }

    cout << "reverse numbers are " << endl;
    for(int i = (5-1); i>=0; i--){

        cout << arr[i] << endl;
    }
    
    return 0;
}


int evenOddArr(){
    cout << "Even numbers are:" << endl;
    for(int i = 0; i<5; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << ",";
        }

    }
    cout << " " << endl;
    cout << "Odd Elements are: " << endl;

    for(int i = 0; i<5; i++){
        if(arr[i] % 2 != 0){
            
            cout << arr[i] << ", ";
        }
        
    }
    return 0;
}

int main(){
   cout << "Enter 1 or 2 or 3 to Choose any one program among 3. \n 1. find the largest element from an array with input 5 \n 2. find odd or even number. \n 3. find the reverse elements array.\n Press any key to simply to Not run any program." << endl;
   cin >> check_input;

   if(check_input == 1 || check_input == 2 || check_input == 3){
    cout << "Enter any five numbers: "; 
    for(int i = 0; i<5; i++){
        cin >> arr[i];
    }
   }
   else{
    cout << "Program is shutting down because ";
   }


    switch (check_input){
    case 1:
        largestArray();
        break;

    case 2:
       cout << "program 2:" << endl;
       evenOddArr();
       break;

    case 3:
       cout << "program 3:"<< endl;
       reverseArray();
       break;

    default:
      cout << "You didnot enter 1 or 2 or 3." << endl;
        
    }

    return 0;
 }

