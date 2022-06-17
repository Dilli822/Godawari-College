#include<stdio.h>
int main(){
	// increment(++) and decrement operator(--) in C
	// pre-increment or pre-decrement operator ++c or --c;  first value is  and then expression is evaluated
	// post-increment or post-decrement operator c++ or c-- ; first expression is evalauted and then value is incremented or decremented
	int a =10, b=10, c=10, d=10, e;
	e = ++a;
	printf("---> pre-increment is %d \n", e);
	printf("------ value of a in e expression is %d \n", a);
	
	e = b++;
	printf("---> post-increment is %d \n", e);
	printf("------ value of b in e expression is %d \n",b);
	
	e = --c;
	printf("---> pre-decrement is %d \n", e);
	printf("------ value of c in e post-decrement is: %d \n", d);
	
	e = d--;
	printf("---> post-decrement is %d \n", e);
	printf("------ value of d in e post-decrement is: %d \n", d);
	
	return 0;
}
