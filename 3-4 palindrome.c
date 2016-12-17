#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){
	char *input = malloc(sizeof(char)*1001);

	scanf("%s",input);

	int len = strlen(input);
	int failure=0;
	for(int i=0; i<len/2;i++){
		if(input[i]!=input[len-i]){
			printf("False");
			return 0;
		}
	}
	printf("True");
	return 0;

}
