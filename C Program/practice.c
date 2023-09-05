#include<stdio.h>

int main(){
    int arr[2][2] = {{12,12}, {1,2}};
    int arr1[2][2] = {{12,12}, {1,2}};
    
    int size = sizeof(arr) / sizeof(arr[0][0]);
    
    int size1 = sizeof(arr1) / sizeof(arr1[0][0]);
    
    
    printf("%d\n", size);
    printf("%d\n", size1);
    
    int sum;
    
    for(int i =0; i < size; i++){
        for(int j =0; j <size1; j++){
            arr[i][j];
            arr1[i][j];
            if(arr[i][j] == arr1[i][j]){
                printf("equal");
            }
           
        }
    }
    
    
    
    return 0;
}