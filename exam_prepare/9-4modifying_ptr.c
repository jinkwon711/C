#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N;
	scanf("%d",&N);
	char *command = malloc(sizeof(char)*100);
	char *word = malloc(sizeof(char)*100);
	char **wordList=(char**)malloc(sizeof(char*)*200);
	int wordcnt=0;
	int duplicate=0;
	for(int i=0; i<N;i++){
		scanf("%s",command);
		if(!strcmp(command,"insert")){
			scanf("%s",word);
			for(int i=0;i<wordcnt;i++){
				if(!strcmp(word,wordList[i])){
					duplicate=1;
					break;
				}
			}
			if(duplicate==0){
				wordList[wordcnt]=malloc(sizeof(char)*100);
				strcpy(wordList[wordcnt++],word);
			}
			duplicate=0;
		}
		else if(!strcmp(command,"delete")){
			scanf("%s",word);
			for(int i=0;i<wordcnt;i++){
				if(!strcmp(word,wordList[i])){
					if(i==wordcnt-1){
						wordcnt--;
						break;
					}
					else{
						strcpy(wordList[i],wordList[--wordcnt]);
						break;
					}
					
				}
			}
		}
		else if(!strcmp(command,"find")){
			scanf("%s",word);
			for(int i=0; i<wordcnt-1;i++){
				for(int j=0; j<wordcnt-1;j++){
					if(strcmp(wordList[j],wordList[j+1])>0){
						char *temp = malloc(sizeof(char)*100);
						strcpy(temp,wordList[j]);
						strcpy(wordList[j],wordList[j+1]);
						strcpy(wordList[j+1],temp);
						free(temp);
					}
				}
			}
			for(int i=0;i<wordcnt;i++){
				if(!strcmp(word,wordList[i])){
					printf("%d\n",i);
					break;
				}
			}

		}
		else if(!strcmp(command,"print")){
			for(int i=0; i<wordcnt-1;i++){
				for(int j=0; j<wordcnt-1;j++){
					if(strcmp(wordList[j],wordList[j+1])>0){
						char *temp = malloc(sizeof(char)*100);
						strcpy(temp,wordList[j]);
						strcpy(wordList[j],wordList[j+1]);
						strcpy(wordList[j+1],temp);
						free(temp);
					}
				}
			}
			for(int i=0; i<wordcnt;i++){
				printf("%s ",wordList[i]);
			}
			printf("\n");
		}
 	}
 	return 0;
}