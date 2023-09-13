// C program to draw a moving car. This
// program run in gcc compiler having
// graphics.h library installed
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;

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


// Set color of car as red
		setcolor(RED);
		int i=0;
		// These lines for bonnet and
		// body of car
		for(i=0;i<=100;i++){
		line(0 + i, 300, 210 + i, 300);
		line(50 + i, 300, 75 + i, 270);
		line(75 + i, 270, 150 + i, 270);
		line(150 + i, 270, 165 + i, 300);
		line(0 + i, 300, 0 + i, 330);
		line(210 + i, 300, 210 + i, 330);

		// For left wheel of car
		circle(65 + i, 330, 15);
		circle(65 + i, 330, 2);

		// For right wheel of car
		circle(145 + i, 330, 15);
		circle(145 + i, 330, 2);

		// Line left of left wheel
		line(0 + i, 330, 50 + i, 330);

		// Line middle of both wheel
		line(80 + i, 330, 130 + i, 330);

		// Line right of right wheel
		line(210 + i, 330, 160 + i, 330);
		delay(50);
		clrscr();
		}
   /* clean up */
   getch();
   closegraph();
   return 0;

}





