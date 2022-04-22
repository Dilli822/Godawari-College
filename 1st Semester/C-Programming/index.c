#include<stdio.h>

void main() {
	
    //	int n in C progamming language always defines the integer only integer like 145154, 100 
    // not the decimal like 454.454 , 4545.5656 
    // int is a keyword that defines data type 
	int n;

	// printf is a print function which print out the messages or datas
	printf("Please Enter your id number only: ");
	
	// scanf always scan the input from users it will take the input from user 
	scanf("%d", &n);
	printf(" You entered a number %d", n);
	
    // Another program which add.subtract, multiple,divide any two numbers
   //  here int means integer data types and we have also declared sum as a variable
   //  we are returing our function value zero
   // we declare or accepts the variables from scanf and perform any specific task inside the task variable
	
	int a,b, task;
	
	printf("Please Enter any one number : ");
	scanf("%d", &a);
	printf("Please enter another number:  ");
	scanf("%d", &b);
	task = a/b;
	printf("final result is %d", task);
	printf("\n");
	
	// \n will break the statement line and add another line it forces cursor to break the line statement
	// and start from another line for eg: if we do printf("line one \n"); printf("line two");
	// output will be line one 
	//                line two
	printf("Line One \n");
	printf("Line two");
	
	// \t will create a horizontal space in between line statement
	printf("We are using backslash t which will create a horizontal space \t this is after inserting the backslash t which instructs the C program to perform that task!");
	return 0;
}
