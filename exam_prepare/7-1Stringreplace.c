#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *inputStr = malloc(sizeof(char)*1001);
	char *cmpStr = malloc(sizeof(char)*1001);
	char *repStr = malloc(sizeof(char)*1001);
	fgets(inputStr,1001,stdin);
	fgets(cmpStr,1001,stdin);
	fgets(repStr,1001,stdin);

	printf("%s",inputStr);
	printf("%s",cmpStr);
	printf("%s",repStr);

	int inputStrLen = strlen(inputStr)-1;
	int cmpStrLen = strlen(cmpStr)-1;
	int doNotReplace = 0;

	for(int i=0; i<inputStrLen-cmpStrLen;i++){
		if(inputStr[i]==cmpStr[0]){
			for(int j=1;j<cmpStrLen; j++){
				if(inputStr[i+j]!=cmpStr[j]&&cmpStr[j]!='?'){
					doNotReplace = 1;
					break;
				}
			}
			if(doNotReplace==0){
				for(int j=0; j<cmpStrLen;j++){
					inputStr[i+j]=repStr[j];
				}
				i=i+cmpStrLen-1;
			}
			doNotReplace=0;
		}
	}

	printf("%s",inputStr);



return 0;
}