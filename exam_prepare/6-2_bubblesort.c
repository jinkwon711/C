#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int N;
scanf("%d",&N);
int *arr = malloc(sizeof(int)*10000);
for(int i=0; i<N;i++){
	scanf("%d",&arr[i]);
}

for(int i=0; i<N-1;i++){
	for(int j=0; j<N-1;j++){
		if(arr[j]>arr[j+1]){
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
}
for(int i=0; i<N; i++){
	printf("%d ",arr[i]);
}
printf("\n");

return 0;
}