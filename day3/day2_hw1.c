#include <stdio.h>

int main(void){
	char arr[1001];
	int result[26]={0,};
	
	scanf("%s",arr);
	//printf("%s\n",arr);
	
	for(int i=0; i!=1001;i++){
		if(arr[i]==0){
				break;
		}
		else if(arr[i]>64 && arr[i]<90){
				result[arr[i]-65]++;
		}
		else if(arr[i]>96 && arr[i]<122){
			result[arr[i]-97]++;
		}


	}



	for(int i = 0; i!=26;i++){
		if(result[i]!=0){
			printf("%c: %d ",(i+97), result[i]);
		}
	}
	printf("\n");
	return 0;
}

