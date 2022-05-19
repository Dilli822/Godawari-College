
#include<stdio.h>

main(){
	int a;
	printf("Enter height");
	scanf("%d", &a);	
	switch(a){
		case 8848:
			printf("Mt everest");
			break;
		case 8858:
			printf("mt lotse");
			break;
			
		default:
			printf("unknown mountain");
	}
	
}
