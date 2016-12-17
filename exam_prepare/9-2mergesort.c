#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(int *arr,int *temp,int l, int mid,int r){
	for(int i=l; i<r+1;i++){
		temp[i]=arr[i];
	}
	int i1=l;
	int i2=mid+1;
	while(1){
		if(i1==mid+1){//left exhaust
			arr[l++]=temp[i2++];
		}else if(i2==r+1){
			arr[l++]=temp[i1++];
		}else if(temp[i1]<temp[i2]){
			arr[l++]=temp[i2++];
		}else{
			arr[l++]=temp[i1++];
		}

		if(i1==mid+1&&i2==r+1){
			break;
		}
	}
	return;
}

void mergeSort(int *arr,int *temp,int l,int r){
	int mid = (l+r)/2;
	if(r==l) return;
	mergeSort(arr,temp,l,mid);
	mergeSort(arr,temp,mid+1,r);
	merge(arr,temp,l,mid,r);
	return;
}


int main(){
	int N;
	scanf("%d",&N);
	int *arr = malloc(sizeof(int)*100000);
	int *temp = malloc(sizeof(int)*100000);
	for(int i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	mergeSort(arr,temp,0,N-1);

	for(int i=0; i<N;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");




return 0;
}