#include <stdio.h>

struct point {
	int x;
	int y;
}x,y,z;

struct point pt;

struct point maxpt = { 320, 200 };

double dist, sqrt(double);

struct rect {
	struct point pt1;
	struct point pt2;
};

struct rect screen;

int main(void)
{
	printf("%d,%d", pt.x, pt.y);
	printf("\n");
	
	printf("%d,%d", maxpt.x, maxpt.y);
	printf("\n");
	
	pt = maxpt;
	
	printf("%d,%d", pt.x, pt.y);
	printf("\n");
	
	
	dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);
	
	printf("%d,%d", screen.pt1.x, screen.pt1.x);
	printf("\n");
	
	screen.pt2 = pt;
	
	printf("%d,%d", screen.pt2.x, screen.pt2.x);
	
}
