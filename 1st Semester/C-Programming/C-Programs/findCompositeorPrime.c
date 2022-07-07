
#include<stdio.h>
int main(){
	int n, i, flag = 0;
	printf("Enter any number to know even or composite");
	scanf("%d", &n);
	
	if(n == 0 || n == 1){
		flag = 1;
	}
	
	for(i=2; i<=n/2; ++i){
		if(n%2==0){
			flag = 1;
			break;
		}
	}
	
	if(flag == 0){
		printf("is prime number");
	}
	else{
		printf(" is composite number");
	}
	
	return 0;
}
