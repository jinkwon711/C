#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int N;
	scanf("%d\n",&N);
	char* string = malloc(sizeof(char)*1000);
	char** wordList = malloc(sizeof(char*)*1000);
	int cnt=0;
	for(int i=0; i<N;i++){
		fgets(string,200,stdin);
		char* token;
		char* word = malloc(sizeof(char)*100);
		token =strtok(string," ");
		if(!strcmp(token,"insert")){
			token =strtok(NULL, " '\n'");
			while(token!=NULL){
				if(!strcmp(token,"\n")) break;
				wordList[cnt] = malloc(sizeof(char)*100);
				strcpy(wordList[cnt++],token);
				token =strtok(NULL, " '\n'");
			}

		}
		else if(!strcmp(token,"delete")){
		char *token;


		}
		else if(!strcmp(token,"find")){


		}
		else if(!strcmp(token,"end")){
			return 0;
		}
	}
	

	for(int i=0;i<cnt;i++){
		printf("%d",i);
		printf("%s\n",wordList[i]);
	}
	printf("%s\n",wordList[1]);

	printf("outside end");


	return 0;
}