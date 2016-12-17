#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	int *arrA = malloc(sizeof(int)*N);
	int *arrB = malloc(sizeof(int)*M);
	int *arrC = malloc(sizeof(int)*(M+N));

	for(int i=0;i<N;i++){
		scanf("%d",&arrA[i]);
	}
	for(int i=0;i<M;i++){
		scanf("%d",&arrB[i]);
	}

	int a,b;
	a = b = 0;
	for(int i=0; i<N+M;i++){
		if(a==N){
			arrC[i] = arrB[b++];
		}
		else if(b==M){
			arrC[i] = arrA[a++];
		}
		else if(arrA[a]<arrB[b]){
			arrC[i] = arrA[a++];
		}
		else{
			arrC[i] = arrB[b++];
		}
	}
	free(arrA);
	free(arrB);

	for(int i=0; i<N+M;i++){
		printf("%d ",arrC[i]);
	}
	printf("\n");


return 0;
}