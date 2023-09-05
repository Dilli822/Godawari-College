#include<stdio.h>

// linear or sequential search works for both sorted and unsorted
int sequentialSearch(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    
    return -1;
};

int main(){
    int arr[] = {1,56,4,3,43};
    int size = sizeof(arr)/sizeof(int);
    int element = 56;
    int searchIndex = sequentialSearch(arr, size, element);
    printf("The element %d was found at index %d ", element, searchIndex);
    return 0;
}