#include <stdio.h>

int main(){
	int n, m,rotate;
	int arr[501][501];
	int arr2[501][501];
	scanf("%d %d",&n,&m);

	for(int i=0; i<n;i++){
		for(int j=0; j<m; j++){
			scanf("%d",&arr[i][j]);
		}
	}

	scanf("%d",&rotate);

	for(int r=1; r<rotate+1;r++){
		for(int i=0; i<n;i++){
			for(int j=0; j<m; j++){
				arr2[j][n-1-i]=arr[i][j];
			}
		}
		int temp = n;
		n = m;
		m = temp;
		for(int i=0; i<n;i++){
			for(int j=0; j<m; j++){
				arr[i][j] = arr2[i][j];
			}
		}

	}

	for(int i=0; i<n;i++){
		for(int j=0; j<m; j++){
			printf("%d ",arr[i][j]);
			
		}
		printf("\n");
	}


	return 0;
}