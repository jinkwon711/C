#include <stdio.h>
#include <stdlib.h>

int main(){

// char *str = malloc(sizeof(char)*1001);
char *ans = malloc(sizeof(int)*200);
char w;


for(int i=0; i<100;i++){
	ans[i] = 0;
}
while(scanf("%c",&w)!=EOF){
	if(w<97){
		w+=32;
	}
	ans[w]++;
}
	for(int i=97; i<122;i++){
		if(ans[i]!=0){
			printf("%c: %d ",i,ans[i]);
		}
	}
	printf("\n");



}