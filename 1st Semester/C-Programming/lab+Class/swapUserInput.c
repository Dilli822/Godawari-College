#include<stdio.h>

// Program that asks the user input any two numbers 
// after user entered the value 
// it will ask user to again to input any desired after you entered any desired it will print the previously used number1 as number2 value 
// 
main(){
	int num1, num2;
	printf("Num1 = ");
	scanf("%d", &num1);
	printf("Num2 = ");
	scanf("%d", &num2);
	int input;
	printf("enter any number to see the change of number2 to number 1 \n");
	scanf("%d", &input);
	if(input == num2){
		printf("Now Your number2 is %d", num1);
	}
	else{
		printf("Now Your number1 is %d", num2);
	}
}
