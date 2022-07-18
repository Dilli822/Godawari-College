#include<stdio.h>
// multi-dimensionl array
int main(){
	int i,j, a,b,c, x,y,z;
	int arr[2][2];
	int arrs[2][2][2] = {45, 85, 69, 81, 56, 47, 40, 34};
	// 3d array
	int arr3[2][2][2] = {1,2,3,4,5,6,7,8};
	printf("Enter any 4 numbers \n");
	for(i=0; i<2; i++){
	   for(j=0; j<2; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0; i<2; i++){
	   for(j=0; j<2; j++){
			printf("input were  %d  \n", arr[i][j]);
		}
	}

	for(a=0; a<2; a++){
		for(b=0; b<2; b++){
			for(c=0; c<2; c++){
				printf("a b c input are ---> %d \n", arr3[a][b][c]);
			}
		}
	}
	
	for(x=0; x<2; x++){
		for(y=0; y<2; y++){
			for(z=0; z<2; z++){
				printf("x y z input are ---> %d \n", arrs[x][y][z]);
			}
		}
	}
	
	return 0;
}
