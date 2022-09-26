

// WAP TO CALCULATE THE EQUATION  y=xPOWER n
#include<stdio.h>
 main(){
	int count, n;
	float x, y;
	printf("Enter the values of x and n: \n");
	scanf("%f %d", &x, &n);
	y = 1.0;
	count = 1;
	
   // while loop revolves here inside it
	while(count <= n){
		y = y*x;
		count++;
	}
	printf("\n x = %d; n = %d; x to power n = %f\n", x,n,y);
}
