#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int N;
	int *arr = malloc(sizeof(int)*1000);
	int *answer = malloc(sizeof(int)*1000);
	scanf("%d",&N);

	for(int i=0; i<N;i++){
		answer[i] = 1;
	}

	for(int i=0; i<N;i++){
		scanf("%d",&arr[i]);
	}

	for(int i=0; i<N;i++){
		for(int j=0;j<N;j++){
			if(arr[i]<arr[j]) answer[i]++;
		}
	}
	for(int i=0; i<N;i++){
		printf("%d ",answer[i]);
	}
	return 0;
}