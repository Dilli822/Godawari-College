#include<stdio.h>

int main(){
	int a = 6, b = 5, x=6, y=5;
	a = ++b;
	printf("This is pre-increment example a = ++b. Here expression a is: %d \n", a);
	printf("This is pre-increment example a = ++b. Here value b is: %d \n\n", b);
	a = b++;
	printf("This is post-increment example a = b++. Here expression a is: %d \n", a);
	printf("This is post-increment example a = b++. Here value b is: %d \n\n", b);
	x = --y;
	printf("This is pre-decrement example x = --y. Here expression a is: %d \n", x);
	printf("This is pre-decrement example x = --y. Here value b is: %d \n\n", y);
	x = y--;
	printf("This is post-decrement example x = y--. Here expression a is: %d \n", x);
	printf("This is post-decrement example x = y--. Here value b is: %d \n", y);
	return 0;
}
