#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int N,M,rotation;
	scanf("%d %d",&N,&M);
	int **arr = malloc(sizeof(int*)*N);
	for(int i=0; i<N;i++){
		arr[i] = malloc(sizeof(int)*M);
	}
	for(int i=0;i<N;i++){
		for(int j=0; j<M;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	scanf("%d",&rotation);

	if(rotation==1){

	}else if(rotation==2){

	}else if(rotation==3){
		
	}


	for(int i=0;i<N;i++){
		for(int j=0; j<M;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}


	


return 0;
}