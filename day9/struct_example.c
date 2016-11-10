#include <stdio.h>

typedef struct {
	double left, top;
	double width, height;
} RECT;

typedef struct {
	double x,y;
	double radius;
} CIRCLE;

int intersect(RECT *l, RECT *r);

int main(){
	RECT rectA = {1.0,2.0, 3.0, 3.0};
	RECT rectB = {2.0, 2.0,3.0,3.0};

	CIRCLE cirA = {0.0,0.0,3.0}
	

	return 0;

}