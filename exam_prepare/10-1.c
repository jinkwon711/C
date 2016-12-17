#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binsearch(int *arr,int key,int l,int r){
	while(1){
		int mid = (l+r)/2;
		if(l>r) return -1;
		if(key<arr[mid]){
			r = mid-1;
		}
		else if(key>arr[mid]){
			l = mid+1;
		}
		else if(key==arr[mid]){
			return mid;
		}
	}
}

int main(){

	int N,M;
	scanf("%d %d",&N,&M);
	int *arr = malloc(sizeof(int)*N);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);

	}
	for(int i=0; i<M;i++ ){
		int temp;
		scanf("%d",&temp);
		printf("%d\n",binsearch(arr,temp,0,N-1));

	}


return 0;
}