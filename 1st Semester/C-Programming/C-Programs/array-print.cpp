#include<stdio.h>
int main() {
	int arr[5];
	printf("Enter any 5 numbers: ");
	for(int i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	printf("Displaying the data. \n");
	for(int i =0; i<5; i++){
		printf("%d \n", arr[i]);
	}
	printf("Diplaying the data in reverse order. \n");
	for(int i=5; i>0; i--){
		printf("%d \n", arr[i]);
	}
	return 0;
}
