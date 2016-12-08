#include <stdio.h>

int arr[100000];

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}

	int answer = 0;
	for(int i=0;i<n-1;i++){
		if(answer+arr[i]>arr[i]){
			answer = answer+arr[i];
		}
		else{
			answer = arr[i];
		}
	}
	printf("%d\n",answer);
	return 0;
}
