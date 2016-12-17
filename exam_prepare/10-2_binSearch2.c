#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double func(double x){
	return x*pow(2,x);
}


int main(){
	double Y;
	scanf("%lf",&Y);
	double l = 0;
	double r = 20;
	double mid = (l+r)/2.0;
	if(Y>func(r)||Y<func(l)) return 0;
	while(1){
		mid = (l+r)/2.0;
		if(l>r) return 0;
		if(fabs(func(mid)-Y)<0.001){
			printf("%.6lf\n",mid);
			break;
		}
		else if(func(mid)>Y){
			r = mid;
		}
		else if(func(mid)<Y){
			l = mid;
		}
	}

return 0;
}