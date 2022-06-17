#include<stdio.h>
int main(){
	int a[] = {1,2,3,4};
	int sum = 0;
	for(int i; i<4; ++i){
		sum += a[i];
	}
	printf("%d", sum);
	return 0;
}
