#include <stdio.h>
#include <math.h>
#define EPSILON 0.00001

double poly(double x){
	return pow(x,3)-x-2;
}

double bisection(double start, double end, double value){
	
	double mid = (start+end)/2.0;

	if((poly(mid)==value)||((end - start)<EPSILON)){
		return mid;
	};
	if(poly(mid)>value){
		return bisection(start, mid, value);
	}
	else if(poly(mid)<value){
		return bisection(mid, end, value);
	}
}

int main(){
	

	

	double answer = bisection(1.0,2.0,0.0);
	printf("%lf\n",answer);
	return 0;

}