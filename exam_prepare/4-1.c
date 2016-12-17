#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	char *input = malloc(sizeof(char)*1000);

	scanf("%s",input);

	int len = strlen(input);

	for(int i=0; i<len;i++){
		if(input[i]<92){
			input[i]+=32;
		}
		else{
			input[i]-=32;
		}
	}

	printf("%s",input);






	return 0;

}