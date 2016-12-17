#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N;
	scanf("%d",&N);
	char command[101];
	char *word= malloc(sizeof(char)*101);
	char **wordList =malloc(sizeof(char*)*101);
	int wordcnt=0;
	int wordidx=0;
	char c;

	for(int i=0; i<N;i++){
		scanf("%s",command);
		if(strcmp(command,"insert")){
			while((c=getchar())!='\n'){
				if(c!=' '){
					wordList[wordcnt][wordidx++]=c;
				}
				else {
					wordcnt++;
					wordidx=0;
				}
			}
		}
	}
	for(int i=0; i<3;i++){
		printf("%s\n",wordList[i]);
	}

return 0;
}