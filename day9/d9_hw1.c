#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *arr, int start, int end, int x){
	
	int mid = (start+end)/2;
	if(start>end) return -1;
	if(arr[mid]>x){
		return binarySearch(arr,start,mid-1,x);
	}
	else if(arr[mid]<x){
		return binarySearch(arr, mid+1, end,x);
	}
	else{
		return mid;
	}

}


int main(){
	int N;
	int Q;
	int *arr1, *arr2;

	scanf("%d%d",&N,&Q);

	arr1 = (int*)malloc(N*sizeof(int));
	arr2 = (int*)malloc(Q*sizeof(int));

	for(int i=0; i!=N; i++){
		scanf("%d",&arr1[i]);
	}

	for(int i=0; i!=Q; i++){
		scanf("%d",&arr2[i]);
	}

	for(int j=0; j!=Q;j++){
		printf("%d ",binarySearch(arr1,0,N-1,arr2[j]));
	}



	return 0;
}