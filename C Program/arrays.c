
// Array is a data structure which is used to store similar data types in C programming
// Array is dynamic in nature means it indexed elements can be changed, deleted or replaced

// One-Dimensional array
// 2d array 
// multiple dimensional array

// One-dimensional array is simple linear array which is faster having only one row and columns
// Two-Dimensional -> array having more than one row and columns are 2d arrays also called table or matrix array
// Multi Dimensional array having more than 2 or multiple rows and columns


// Benefits of array
// program efficiency 
// efficient use of memory
// easy to access elements
// simplify the programming

#include<stdio.h>

int main(){

    int arr[20] = {12,23,4545,4545,9697};

    printf(" printing single 1 indexed array element %i ", arr[1]);
    printf( "\n");

    printf(" Using loop in array to print the elements of array \n");
    for (int i =0; i<arr[i]; i++){
        printf(" index %i = element %i \n", i, arr[i]);
    }

    return 0;
}