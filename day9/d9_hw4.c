#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int cnt=0;

typedef struct{
	char* name;
	double height;
	int weight;

}PERSON;

void swap(PERSON *a,PERSON *b){
	PERSON temp;
	temp = *a;
	*a = *b;
	*b = temp;
	// printf("swapped\n");
}
void sort(int N, PERSON *arrPtr, int(*cmp)(PERSON*,PERSON*)){
	for(int i=0; i!=N-1; i++){
		for(int j=0; j!=N-1; j++){
			cnt=0;
			if(cmp(&arrPtr[j],&arrPtr[j+1])){
				swap(&arrPtr[j],&arrPtr[j+1]);
			}
		}
	}
}
int sortByHeight(PERSON*,PERSON *);
int sortByWeight(PERSON*,PERSON *);

int sortByName(PERSON *a, PERSON *b){
	cnt++;
	// printf("sorted By Name called\n");
	if(strcmp(a->name,b->name)>0){
		// printf("sorted?");
		return 1;
	}
	else if(strcmp(a->name,b->name)<0){
		return 0;
	}else{
		if(cnt>2){ return 0;}
		return sortByHeight(a,b);
	}
	return 0;

}
int sortByHeight(PERSON *a, PERSON *b){
	cnt++;
	// printf("sorted By height called\n");
	if(a->height-b->height>0){
		return 1;
	}
	else if(a->height-b->height<0){
		return 0;
	}else{
		if(cnt>2){ return 0;}
		return sortByWeight(a,b);
	}
	return 0;

}
int sortByWeight(PERSON *a, PERSON *b){
	cnt++;

	// printf("%d\n",cnt);
	// printf("sorted By weight called\n");
	if(a->weight-b->weight>0){
		return 1;
	}
	else if(a->weight-b->weight<0){
		return 0;
	}else{
		if(cnt>2){ return 0;}
		return sortByName(a,b);
	}
	return 0;

}

int main(){
	char tempName[100];

	// if(strcmp("nLWTelsW","fwOcosyC")){
	// 	printf("hi");
	// }


	int N;
	scanf("%d",&N);
	PERSON *arrPtr = (PERSON *)malloc(sizeof(PERSON)*N);
	PERSON *arrDisplay = (PERSON *)malloc(sizeof(PERSON)*N);

	for(int i=0; i!=N; i++){
		PERSON temp;

		scanf("%s %lf %d",tempName,&temp.height,&temp.weight);
		temp.name = (char*)malloc(strlen(tempName)+1);
		strcpy(temp.name,tempName);
		arrPtr[i] = temp;
	}
	cnt=0;
	sort(N,arrPtr,sortByName);
	for(int i=0; i!=N; i++){
		printf("%s %.1lf %d\n",arrPtr[i].name,arrPtr[i].height,arrPtr[i].weight);
	}

	cnt =0;
	sort(N,arrPtr,sortByHeight);
	for(int i=0; i!=N; i++){
		printf("%s %.1lf %d\n",arrPtr[i].name,arrPtr[i].height,arrPtr[i].weight);
	}
	cnt =0;
	sort(N,arrPtr,sortByWeight);
	for(int i=0; i!=N; i++){
		printf("%s %.1lf %d\n",arrPtr[i].name,arrPtr[i].height,arrPtr[i].weight);
	}



}