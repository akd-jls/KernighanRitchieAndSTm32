#include <stdio.h>

#define XMAX 300
#define YMAX 200

struct point {
	int x;
	int y;
}x,y,z;


struct rect {
	struct point pt1;
	struct point pt2;
};

struct rect screen;

struct point makepoint(int, int);
struct point addpoint(struct point p1, struct point p2);
int ptinrect(struct point p, struct rect r);
struct rect canonrect(struct rect r);

int main(void)
{
	struct rect screen;
	struct point middle;
	screen.pt1 = makepoint(0,0);
	screen.pt2 = makepoint(XMAX, YMAX);
	middle = makepoint((screen.pt1.x + screen.pt2.x)/2, (screen.pt1.y + screen.pt2.y)/2);	
		
	struct point p3;
		
	p3 = addpoint(screen.pt1, screen.pt2);
		
	printf("point (%d, %d) is %s rectnangle\n",middle.x,middle.y, ptinrect(middle, screen)? "inside" : "outside" );
	printf("point (%d, %d) is %s rectnangle\n",p3.x,p3.y,         ptinrect(p3,     screen)? "inside" : "outside" );
		
	screen = canonrect(screen);
		
	struct point origin, *pp;
		
	origin = screen.pt1;
		
	pp = &origin;
	printf("origin is (%d,%d)\n", (*pp).x, (*pp).y);
	printf("origin is (%d,%d)\n", pp->x, pp->y);

	struct rect r, *rp = &r;
	
	 rp->pt1.x   = r.pt1.x;
	(rp->pt1).x  = (r.pt1).x;
	
}

		/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y)
{
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

/* addpoints: add two points */
struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}

/* ptinrect: return 1 if p in r, 0 if not */
int ptinrect(struct point p, struct rect r)
{
	return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
/* canonrect: canonicalize coordinates of rectangle */
struct rect canonrect(struct rect r)
{
	struct rect temp;
	temp.pt1.x = min(r.pt1.x, r.pt2.x);
	temp.pt1.y = min(r.pt1.y, r.pt2.y);
	temp.pt2.x = max(r.pt1.x, r.pt2.x);
	temp.pt2.y = max(r.pt1.y, r.pt2.y);
	return temp;
}


