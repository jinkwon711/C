#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int main(){
	char *str = malloc(sizeof(char)*1000);
	char *input = malloc(sizeof(char)*1001);
	str = "C is a general-purpose,imperative computer programming language, supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations";
	int answer =0;
	int notEqual=1;
	scanf("%s",input);
	int inputLen = strlen(input);
	int strLen = strlen(str);
	for(int i=0;i<strLen-inputLen+1;i++){
		if(str[i]==input[0]){
			for(int k = 1; k!=inputLen;k++){
				if(str[i+k]!=input[k]){
					notEqual =1;
					break;
				}
			}
			if(notEqual==0){//equal
				answer ++;
			}
			notEqual =0;
		}
	}
	printf("%d\n",answer);

	return 0;

}