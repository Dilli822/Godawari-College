#include <stdio.h>


int main(){
    int a[2][2], b[2][2], c[2][2], i, j;
	printf("Enter numbers for a \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
                printf("a[%d][%d]", i,j);
                scanf("%d", &a[i][j]);
               
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
             printf("b[%d][%d]", i,j);
            scanf("%d", &b[i][j]);

        }
    }    
	printf("\n");

   for( i=0; i<2; i++)
  {
    for( j=0; j<2; j++)
    {
    c[i][j] = a[i] [j] + b[i][j];
      printf("%d ", c[i][j]);
    }
    printf("\n"); // new line
  }


    return 0;
}
