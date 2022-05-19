#include<stdio.h>

//main () {
//	int a,b,c;
//	printf("Enter your 1st Number: ");
//	scanf("%d", &a);
//	printf("Enter your second Number: ");
//	scanf("%d", &b);
//	printf("Enter your third number: ");
//	scanf("%d", &c);
//	
//	if(a>b>c){
//		printf("first number is greater than second  number");
//	}
//	else if(b>a>c){
//		printf("second number is greater than first  number");
//	}
//	
//	printf("third number is greater than first and second number");
//
//}

//main() {
//	int a;
//	
//	printf("enter zero");
//	scanf("%d", &a);
//	if(a>0){
//		printf("a is greater than zero");
//	}
//	else if (a>=0){
//		printf("a is equal to zero");
//	}
//}


main(){
	int a;
	printf("enter any number to find either number is greater than five or not");
	scanf("%d",&a);
	if(a>5){
		printf(" Your input is greater than 5");
	}
	else if(a<5){
		printf("Your input is less than 5");
	}
	else if(a==5){
		printf("Your input is equal to 5");
	}
	
}
