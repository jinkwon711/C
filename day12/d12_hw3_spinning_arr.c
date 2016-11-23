#include <stdio.h>
#include <stdlib.h>


int main(){

	int arr[500][500];
	int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	int N;
	scanf("%d",&N);
	int cnt=1;
	int right = N;
	int bottom = N;
	int left = -1;
	int top = 0;
	int i=0; 
	int j=0;

	while(cnt<N*N+1){
		while(cnt<N*N+1){
			arr[i][j]=cnt++;
			i+=d[0][0];
			j+=d[0][1];	
			if(j+1==right){
				right--;
				break;
			}
		}
		while(cnt<N*N+1){
			arr[i][j]=cnt++;
			i+=d[1][0];
			j+=d[1][1];
			if(i+1==bottom){
				bottom--;
				break;
			}
		}
		while(cnt<N*N+1){
			arr[i][j]=cnt++;
			i+=d[2][0];
			j+=d[2][1];
			if(j-1==left){
				left++;
				break;
			}
		}
		while(cnt<N*N+1){
			arr[i][j]=cnt++;
			i+=d[3][0];
			j+=d[3][1];
			if(i-1==top){
				top++;
				break;
			}
			
		}	

	}
	for(int i=0; i!=N;i++){
		for(int j=0; j!=N; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}		