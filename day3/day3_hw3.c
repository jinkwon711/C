#include <stdio.h>

int main(){
	
	int arr[1000];
	int cnt=0;
	int c;
	while((scanf("%d",&c))!=EOF){
			arr[cnt]=c;
			cnt++;
		
	}

	for(int i=0;i!=cnt;i++){
			printf("%d ",arr[cnt-i-1]);
	}
	printf("\n");
	return 0;
}
	
