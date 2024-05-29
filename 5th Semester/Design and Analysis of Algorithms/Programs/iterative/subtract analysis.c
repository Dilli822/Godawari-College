#include<stdio.h>

void main(){
    int n = 5;
    for(int i = 0; i < n; i++){
        int j = i;
        while(j>0){
            printf("Compute fast!");
            j--;
        }
    }
}
// OUTPUT N TIMES COMPUTE FAST
// time complexity O(n^2)
// space complexity O(1)

int FOD(int n){
    int i, j, c = 0;
    for(i = 0; i < n; i++){
        for(j = i; j >0; j--){
            printf("Hello");
            c = c++;
        }
        return c;
    }
}