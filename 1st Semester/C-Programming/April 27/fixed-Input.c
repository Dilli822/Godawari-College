#include<stdio.h>

main(){
	printf("checking complier \n");
	const a = 1500;
	printf("Enter 1500 only");
	scanf("%d", &a);

	if(a == 1500){
		printf("You have entered  1500 \n");
	}
	else if (a != 1500){
		printf("You have not entered 1500 but %d", a);
	}
}
