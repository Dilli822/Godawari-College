#include<stdio.h>
#include<string.h>
struct car{
	char name[50];
	int year;
};

int main(){
	struct car car1;
	strcpy(car1.name, "BMW");
	car1.year = 1999;
	printf("struct car car1 is: %s \n", car1.name);
	printf("struct car year is : %d", car1.year);
}
