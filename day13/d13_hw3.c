#include <stdio.h>

int arr[100000];

int main(){
	int n;
	int finalAnswer;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}

	int answer[100000];
	answer[0]=arr[0];
	for(int i=1;i<n;i++){
		if(answer[i-1]+arr[i]>arr[i]){
			answer[i] = answer[i-1]+arr[i];
		}
		else{
			answer[i] = arr[i];
		}
	}
	
	finalAnswer=answer[0];
	for(int i=1;i<n;i++){
		finalAnswer=(finalAnswer<answer[i])?answer[i]:finalAnswer;
			// printf("%d\n",finalAnswer);

	}
	printf("%d\n",finalAnswer);
	return 0;
}