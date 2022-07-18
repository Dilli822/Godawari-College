#include<stdio.h>
int main(){
	int arr[5];
	int cusArr[5];
	int i;
	printf("Please Enter any five numbers: \n");
	
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);

	}
	printf("Diplaying the data in new array");
	for(i=0; i<5; i++){
		printf("%d", arr[i]);
		printf("%d", cusArr[i]);
	}
	
	return 0;
}
