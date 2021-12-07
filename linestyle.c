// C Implementation for setlinestyle()
#include <graphics.h>

// driver code
int main()
{
	// gm is Graphics mode which is
	// a computer display mode that
	// generates image using pixels.
	// DETECT is a macro defined in
	// "graphics.h" header file
	int gd = DETECT, gm;

	// variable to change the
	// line styles
	int c;

	// initial coordinate to
	// draw line
	int x = 200, y = 100;

	// initgraph initializes the
	// graphics system by loading a
	// graphics driver from disk
	initgraph(&gd, &gm, NULL);

	// To keep track of lines
// 	for ( c = 0 ; c < 5 ; c++ )
// {
// 	// setlinestyle function
	setlinestyle(1, 0, 1);

	// Drawing line
	line(100,20,500,20);
	


	getch();

	// closegraph function closes the
	// graphics mode and deallocates
	// all memory allocated by
	// graphics system .
	closegraph();


	}
