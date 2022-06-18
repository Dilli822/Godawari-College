#include<stdio.h>
#define PI 3.1416

int main(){
	int r, area;
	printf("Please Enter the radius of circle to calculate it's area: ");
	scanf("%d", &r);
	area = PI * r * r;
	printf("Area of circle is: %d ", area);
	
	
}
