#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define absoluteError 0.001

double fabs(double x){
	if(x<0) return -x;
	return x;
}

double equation(double x){
	return x*pow(2,x);
}


double bisectionSearch(double (*func)(double),double start, double end, double value){

	double answer;

	while(fabs(start-end)>absoluteError){
		double mid = (start+end)/2.0;
		
		if(func(mid)>value){
			end = mid;
			answer = mid;
		}
		else if(func(mid)<value){
			start = mid;
			answer = mid;
		}
	}
	return answer;

	// double mid = (start+end)/2.0;

	// if((func(mid)==value)||((end - start)<absoluteError)){
	// 	return mid;
	// };
	// if(func(mid)>value){
	// 	return bisectionSearch(equation, start, mid, value);
	// }
	// else if(func(mid)<value){
	// 	return bisectionSearch(equation ,mid, end, value);
	// }
}

int main(){
	//given range;
	double start = 0;
	double end = 20;
	double SearchValue;

	scanf("%lf",&SearchValue);

	double answer = bisectionSearch(equation, start, end, SearchValue);

	printf("%lf\n",answer);



	return 0;
}