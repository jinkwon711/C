#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(char **arr,char **temp,int l, int mid,int r){
	for(int i=l; i<r+1;i++){
		strcpy(temp[i],arr[i]);
	}
	int i1=l;
	int i2=mid+1;
	while(1){
		if(i1==mid+1){//left exhaust
			strcpy(arr[l++],temp[i2++]);
		}else if(i2==r+1){
			strcpy(arr[l++],temp[i1++]);
		}else if(strcmp(temp[i1],temp[i2])>0){
			strcpy(arr[l++],temp[i2++]);
		}else{
			strcpy(arr[l++],temp[i1++]);
		}

		if(i1==mid+1&&i2==r+1){
			break;
		}
	}
	return;
};

void mergeSort(char **arr,char **temp,int l,int r){
	int mid = (l+r)/2;
	if(r==l) return;
	mergeSort(arr,temp,l,mid);
	mergeSort(arr,temp,mid+1,r);
	merge(arr,temp,l,mid,r);
	return;
};

int main(){
	int N;
	char **tempList = malloc(sizeof(char*)*10000);
	char **stringList = malloc(sizeof(char*)*10000);
	scanf("%d",&N);
	for(int i=0; i<N;i++){
		stringList[i] = malloc(sizeof(char)*101);
		tempList[i] = malloc(sizeof(char)*101);
		scanf("%s",stringList[i]);
	}

	mergeSort(stringList,tempList,0,N-1);


	for(int i=0; i<N;i++){
		printf("%s ",stringList[i]);
	}
	printf("\n");




return 0;
}