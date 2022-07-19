#include<stdio.h>
int main(){
	// goto statement
	int num, i = 1;
	printf("Enter any number to get it's table : ");
	scanf("%d", &num);
	table:
		printf("%d X %d = %d \n", num,i,num*i);
		i++;
	if(i<=10){
		goto table;
	}
}
