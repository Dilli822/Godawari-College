
#include<stdio.h>

main(){
	int a;
	printf("Enter any number to know whether it is negative positive or zero: ");
	scanf("%d", &a);
	
	if(a == 0){
		printf("Number is zero -- %d", a);
	}
	else if (a!=0){
		printf("Number is non zero. It is %d", a);
	}
	else if(a > 0){
		printf("Number is negative. It is %d", a);
	}
}
