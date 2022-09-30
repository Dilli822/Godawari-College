#include<stdio.h>
#define COLMAX 10
#define ROWMAX 10

main(){
	int row, column, y;
	row = 1;
	printf("MULTIPLICATION TABLE \n");
	printf("----------------------------------- \n");
	
    // outermost loop 
	do{
		column = 1;
		do{
			y = row * column;
			printf("%4d", y);
			column = column + 1;
		}
		while(column <= COLMAX);
		printf("\n");
		row = row +1;
	}
	while(row <= ROWMAX);
		printf("------------------------------------------------- \n");
	
}
