#include<stdio.h>
#include<graphics.h>

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gd, " ");

    int centerX;
    int centerY;
    
    int radius;
    circle(centerX, centerY, radius);
    closegraph();



    return 0;
}