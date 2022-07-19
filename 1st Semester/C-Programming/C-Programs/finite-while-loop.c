#include<stdio.h>
void main(){
	// same program for infinte looping using continue statement
	int j = 0;
	while(j!=10){
		printf("%d", j);
		// checks condition and then only continue statement
		j++;
		// continue statement skips the current iteration 
		continue;
	}
}
