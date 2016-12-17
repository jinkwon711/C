#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	scanf("%d",&N);
	int **arr = malloc(sizeof(int*)*N);
	for(int i=0; i<N;i++){
		arr[i] = malloc(sizeof(int)*2);
	}

	for(int i=0; i<N;i++){
		scanf("%d %d",&arr[i][0],&arr[i][1]);
	}

	for(int i=0; i<N-1;i++){
		for(int j=0; j<N-1;j++){
			if(arr[j][0]>arr[j+1][0]){
				int *temp = malloc(sizeof(int)*2);
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] =temp;
			}
		}
	}

	int *answerArr =malloc(sizeof(int)*10000);
	for(int i=0; i<10000;i++){
		answerArr[i] = 0;
	}
	// for(int i=0; i<N;i++){
	// 	printf("%d %d\n",arr[i][0],arr[i][1]);
	// }
	for(int i=0; i<N;i++){
		int l = arr[i][0];
		int r = arr[i][1];
		for(int j=l;j<r+1;j++){
			answerArr[j]=1; 
		}
	}

	
	int init = 0;
	int front = -1;
	int end = -1;
	for(int i=0; i<10000;i++){
		if(init!=answerArr[i]){
			if(init==0){
				front = i;
			}else{
				end =i-1;
			}
			init = !init;
		}
		if(front!=-1&&end!=-1){
			printf("%d %d\n",front,end);
			front=-1;
			end = -1;
		}
		
	}







	return 0;
}