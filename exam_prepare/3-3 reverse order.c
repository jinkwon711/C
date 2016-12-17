#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){
	int *arr = malloc(sizeof(int)*1000);
	int w;
	int cnt = 0;

	while(scanf("%d",&w)!=EOF){
		arr[cnt++] = w;
	}

	for(int i=cnt-1; i>=0; i--){
		printf("%d ",arr[i]);
	}
	printf("\n");


	return 0;
}