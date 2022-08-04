#include<stdio.h>
int main(){
	int *x;
	int a = 10;
	x = &a;
	printf("%d \n", x);
	printf("%d", *x);
}
