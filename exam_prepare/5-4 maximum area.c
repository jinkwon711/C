#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	double **arr = malloc(sizeof(double *)*1000);
	int N;
	double answer =0;
	scanf("%d",&N);

	for(int i=0; i<N;i++){
		arr[i]= malloc(sizeof(double)*2);
	}
	for(int i=0; i<N;i++){
		scanf("%lf %lf",&arr[i][0],&arr[i][1]);
	}
	for(int i=0; i<N;i++){
		for(int j=0; j<N;j++){
			for(int k=0; k<N;k++){
				double temp = fabs(arr[i][0]*arr[j][1]+arr[j][0]*arr[k][1]+arr[k][0]*arr[i][1]-arr[i][1]*arr[j][0]-arr[j][1]*arr[k][0]-arr[k][1]*arr[i][0])/2;
				if(temp>answer) answer = temp;
			}
		}
	}

	printf("%.2lf\n",answer);


return 0;
}