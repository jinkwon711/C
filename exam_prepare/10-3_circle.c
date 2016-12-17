#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

	int N,M;
	scanf("%d %d",&N,&M);
	int cirA,cirB;
	int **arr = malloc(sizeof(int*)*1500);
	for(int i=0;i<N;i++){
		arr[i] = malloc(sizeof(int)*3);
	}

	for(int i=0; i<N;i++){
		scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
	}

	for(int i=0; i<M;i++){
		scanf("%d %d",&cirA,&cirB);
		int x1 =arr[cirA][0];
		int x2 =arr[cirB][0];
		int y1 =arr[cirA][1];
		int y2 =arr[cirB][1];
		int d1 =arr[cirA][2];
		int d2 =arr[cirB][2];
		if(cirA==cirB) printf("no\n");
		else if((pow(x1-x2,2)+pow(y1-y2,2)<pow(d1+d2,2))&&(pow(x1-x2,2)+pow(y1-y2,2)>pow(d1-d2,2))){
			printf("yes\n");
		}
		else {
			printf("no\n");
		}


	}





	


return 0;
}