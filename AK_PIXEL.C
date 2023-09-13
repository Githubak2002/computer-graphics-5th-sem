// C Implementation for putpixel()
#include <graphics.h>
#include <stdio.h>

// driver code
int main()
{
	int gd = DETECT, gm, color;

	initgraph(&gd, &gm, "C://TC//BGI");

	// putpixel function
	putpixel(83, 33, GREEN);
	putpixel(84, 34, RED);
	putpixel(85, 35, YELLOW);
	putpixel(86, 36, CYAN);
	putpixel(87, 37, GREEN);
	putpixel(88, 38, RED);
	putpixel(89, 39, YELLOW);
	putpixel(90, 40, CYAN);
	putpixel(45, 60, BLUE);
	putpixel(20, 100, WHITE);
	putpixel(200, 100, LIGHTBLUE);
	putpixel(150, 100, LIGHTGREEN);
	putpixel(200, 50, YELLOW);
	putpixel(120, 70, RED);

	getch();

	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by
	// graphics system .
	closegraph();

	return 0;
}
