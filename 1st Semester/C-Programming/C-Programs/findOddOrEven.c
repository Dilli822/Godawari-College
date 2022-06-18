#include<stdio.h>

int main(){
	int a;
	printf("Enter any number to know odd or even: ");
	scanf("%d", &a);
	if(a%2==0){
		printf("You entered %d", a );
		printf(" which is an even number.");
	}
	else{
		printf("You entered %d ", a);
		printf(" which is an odd number.");
	}
	
}
