#include <stdio.h>
#include<conio.h>
int main(){
    int m[3][3], n[3][3], i, j;
    printf("Enter the Elements of the matrix: ");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("m[%d][%d]", i,j);
            scanf("%d", &m[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("m[%d][%d]", i,j);
            n[j][i] = m[i][j];
        }
    }
    printf("The input matrix is \n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("The input matrix is \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d \t", n[i][j]);
        }
        printf("\n");
    }


  return 0;
}
