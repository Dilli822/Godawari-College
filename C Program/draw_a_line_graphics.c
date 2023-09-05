#include <graphic.h>
#include <stdio.h>

int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");
   // Draw a line from (100, 100) to (200, 200)
   line(100, 100, 200, 200);
   delay(5000);
   closegraph();
   return 0;
}

