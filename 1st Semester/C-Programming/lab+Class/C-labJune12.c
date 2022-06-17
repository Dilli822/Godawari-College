#include<stdio.h>

/* Basic strcture of C program
   pre-processer directory files --> #include<stdio.h>
   int main(){
      //this is main function which is int main return 0 by default.
   }
*/

int prgStructure(){
	printf("This is basic building block of C-program! \n");
	return 0;
}

//operation to perform add,diff,div and multiplication
int operation(){
    int a,b,sum, subtract, division, multiplication;
    printf("Enter your first number: \n");
    scanf("%d", &a);
    printf("Enter your first number:\n");
    scanf("%d", &b);
    sum = a+b;
    subtract = a -b;
    division = a/b;
    multiplication = a *b;
    printf("Addition of two input is: %d \n", sum);
    printf("Subtraction of two input is: %d \n", subtract);
    printf("Multiplication of two input is: %d \n", multiplication);
    printf("Division of two input is: %d \n", division);
    return 0;
}

// main function
int main(){
//    printf("Hello from main function \n");
//    operation();
//    printf("Another program has started.... \n");
//    findOddEven();
//    printf("Another program showing global and local variable \n");
    formatted_Function();
    unformatted_Function();
    return 0;
}

// program to find odd even number 
int findOddEven(){
	int x;
	printf("please enter any number to find odd or even: \n");
	scanf("%d", &x);
	if(x%2 == 0){
		printf("%d It is an even number: \n",x);
	}
	else{
		printf("%d It an odd number: \n", x );
	}	
}


// function having local variable
int global_Var = 566;

int type_Var(){
	int localVar = 45;
	printf("%d is a local variable exists only inside the scope of function type_Var:\n ", localVar);
	printf("%d is a global coming from outside the function type_var", global_Var);
}

// program showing formatted and unformatted functions
int formatted_Function(){
	char letter;
	printf("Type any: \n");
	letter = getche();
	// this is formatted input function where we cannot do customization or ask use as desired input
//	printf(" you typed \n");
	putchar(letter);
	printf("\n");
	return 0;
}

int unformatted_Function(){
	int num;
	printf("%d enter any number: \n ");
	scanf("%d", &num);
	printf("%d this is num", num);
}



