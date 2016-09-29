#include <stdio.h>
#include <string.h>

int main(){
	int arr[1001];
	int l= 0;
	int j=0;
	scanf("%s",arr);

	l=strlen(arr);

	while(arr[j]==arr[l-j-1]){
		j++;
		if(j==l){
			printf("%s","True");
			break;
		}
	}
	if(j!=l){
		printf("%s","False");
	}
	return 0;
}
