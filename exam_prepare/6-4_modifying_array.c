#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
	int N,x,y,inst;
	int command;
	scanf("%d",&N);
	int *arr = (int*)malloc(sizeof(int)*N);
	for(int i=0; i<N;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&inst);
	for(int i=0; i<inst;i++){
		scanf("%d",&command);
		scanf("%d",&x);
		scanf("%d",&y);

		if(command==0){
			int temp = arr[x];
			arr[x] = arr[y];
			arr[y] = temp;
		}
		else if(command==1){
			for(int i=0; i<N;i++){
				if(arr[i]==x)arr[i] = y;
			}
		}
		else if(command==2){
			int temp = arr[y];
			for(int i=y; i>x;i--){
				arr[i]= arr[i-1];
			}
			arr[x]=temp;
		}
		else if(command==3){
			for(int i=0; i<N-1;i++){
				for(int j=0;j<N-1;j++){
					if(arr[j]<arr[j+1]){
						int temp = arr[i];
						arr[i] = arr[i+1];
						arr[i+1] = temp;
					}
				}
			}
		}
		for(int i=0; i<N;i++){
		printf("%d ",arr[i]);
	}

	}
	// for(int i=0; i<N;i++){
	// 	printf("%d ",arr[i]);
	// }
	
return 0;
}