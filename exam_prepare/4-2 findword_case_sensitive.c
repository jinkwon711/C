#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *sentence = malloc(sizeof(char)*1000);
	char *word = malloc(sizeof(char)*1000);

	scanf("%s",sentence);
	scanf("%s",word);
	int sentenceLen = strlen(sentence);
	int wordLen = strlen(word);
	int answer =0;
	int notEqual = 0;

	for(int i=0;i<sentenceLen-wordLen+1;i++){
		if(sentence[i]==word[0]){
			for(int k = 1; k<wordLen;k++){
				if(sentence[i+k]!=word[k]){
					notEqual =1;
					break;
				}
			}
			if(notEqual==0){//equal
				answer++;
			}
			notEqual =0;
		}
	}
	printf("%d\n",answer);

return 0;
}