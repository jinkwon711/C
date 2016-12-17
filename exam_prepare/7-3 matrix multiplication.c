#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N;
	scanf("%d",&N);
	int **arrA = (int **)malloc(sizeof(int*)*20);
	int **arrB = (int **)malloc(sizeof(int*)*20);
	int **arrC = (int **)malloc(sizeof(int*)*20);


	for(int i=0; i<N;i++){
		arrA[i] = malloc(sizeof(int)*20);
		arrB[i] = malloc(sizeof(int)*20);
		arrC[i] = malloc(sizeof(int)*20);
	}
	for(int i=0; i<N;i++){
		for(int j=0; j<N;j++){
			scanf("%d",&arrA[i][j]);
		}
	}
	for(int i=0; i<N;i++){
		for(int j=0; j<N;j++){
			scanf("%d",&arrB[i][j]);
		}
	}
	for(int i=0; i<N;i++){
		for(int j=0; j<N;j++){
			arrC[i][j] = 0;
		}
	}
	for(int i=0; i<N;i++){
		for(int j=0; j<N;j++){
			int x = 0;
			for(int k=0; k<N;k++){
				arrC[i][j] +=arrA[i][x]*arrB[x][j] ;
				x++;
			}
		}
	}


	for(int i=0; i<N;i++){
		for(int j=0; j<N;j++){
			printf("%d ",arrC[i][j]);
		}
		printf("\n");
	}


return 0;
}