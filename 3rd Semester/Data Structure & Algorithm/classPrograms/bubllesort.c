#include<stdio.h>

void ascending(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i +1; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i =0; i <size; i++){
        printf(" %d ", arr[i]);
    }

}

void descending(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i +1; j < size; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i =0; i <size; i++){
        printf("%d", arr[i]);
    }
}

int main(){
    int arr[] = {12,56,8,1,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("Printing the original array ");
    for(int i =0; i <size; i++){
        printf(" %d ", arr[i]);
    }
    
    printf("descending order ");
    descending(arr, size);
    


    return 0;
}