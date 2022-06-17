#include<stdio.h>
int main(){
	char sign;
	printf("Please enter any operator sign(+, -, *, /) to perform operation:");
	scanf("%c", &sign);
	printf("%c \n", sign);
	int a,b;
	scanf("%d%d",&a,&b);
	
	switch(sign){
		case '+':
			printf("You selected addition operation.The result of addition is: %d", a+b);
			break;
		case '-':
			printf("You selected subtraction operation.The result of addition is: %d", a-b);
			break;		
		case '*':
			printf("You selected multiply operation.The result of addition is: %d", a*b);
			break;
		case '/':
			printf("You selected division operation.The result of addition is: %d", a/b);
			break;
		default:
			printf("You didnot select any operation or input is invalid");
	}
	
	return 0;
}
