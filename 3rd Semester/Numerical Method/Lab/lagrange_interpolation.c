#include<stdio.h>
int main(){

}#include <stdio.h>

void main() {
    float x[100], y[100], xp, yp = 0, p;
    int i, n, j;
    
    printf("Enter the number of data: ");
    scanf("%d", &n);

    printf("Enter data:\n");
    for (i = 1; i <= n; i++) {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i); // Corrected from j to i
        scanf("%f", &y[i]);   // Corrected from j to i
    }

    printf("Enter the interpolation point: ");
    scanf("%f", &xp);

    for (i = 1; i <= n; i++) {
        p = 1;
        
        for (j = 1; j <= n; j++) {
            if (i != j) {
                p = p * (xp - x[j]) / (x[i] - x[j]); // Added brackets here
            }
        } // end of for j loop

        yp = yp + p * y[i];
    }

    printf("%.3f is %.3f", xp, yp);
}
