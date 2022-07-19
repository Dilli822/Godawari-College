#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0; i<10; i++){
		for(j=0; j<3; j++){
			for(k=0; k<5; k++){
				printf("%d%d%d \n", i,j,k);
				if(j==2){
					goto out;
				}
			}
		}
	}
	out:
		printf("Loop came out of out from j loop.");
	return 0;
}
