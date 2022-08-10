#include<stdio.h>
#include<string.h>
// structure creation
struct number{
	float x;
};

int main(){
	struct number n1,n2,n3;
	n1.x = 8;
	n2.x = 5;
	n3.x = n1.x + n2.x;
	printf("\n %f", n3.x);
	return 0;
}
