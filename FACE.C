#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>




int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;
   int eyeradius = 10;
   int smileradius = 30;
   int stangle = 230, endangle = 320;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "C://TC//BGI");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw the circle */
   circle(midx, midy, radius);
   circle(midx-30, midy-30,eyeradius);
   circle(midx+30, midy-30,eyeradius);
   arc(midx, midy+30, stangle, endangle,smileradius);
   line(midx,midy-5,midx,midy+25);


   /* clean up */
   getch();
   closegraph();
   return 0;

}





