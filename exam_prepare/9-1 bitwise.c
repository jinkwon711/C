#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int N,M,x,y;
	char *command=malloc(sizeof(char)*65);
	char * temp = malloc(sizeof(char)*65);
	long long tempNum;
	scanf("%d %d",&N,&M);
	long long *arrList = malloc(sizeof(long long)*1000);
	char **answerList = malloc(sizeof(char*)*65);
	int tempLen=0;

	for(int i=0; i<N;i++){
		scanf("%s",temp);
		
		tempLen = strlen(temp);
		for(int j=0; j<tempLen;j++){
			if(temp[j]!='0'){
				tempNum += pow(2,tempLen-j-1);
			}
		}
		arrList[i] = tempNum;
		tempNum=0;
	}


	for(int i=0; i<M;i++){
		scanf("%s %d %d",command,&x,&y);
		int answer=0;
		if(!strcmp(command,"and")){
			answer = arrList[x]&arrList[y];
		}else if(!strcmp(command,"or")){
			answer = arrList[x]|arrList[y];
		}else if(!strcmp(command,"xor")){
			answer = arrList[x]^arrList[y];
		}else if(!strcmp(command,"right")){
			answer = arrList[x]>>y;
		}
		int len = tempLen;
	 	char *string =malloc(sizeof(char)*(len+1));
	 	for(int j=0; j<tempLen;j++){
	 		if(answer>=pow(2,len-1)){
	 			string[j]='1';
	 			answer-=pow(2,len-1);
	 			len--;
	 		}else{
	 			string[j]='0';
	 			len--;
	 		}
	 	}
	 	string[tempLen]='\0';
		answerList[i]= string;
	}
	for(int i=0; i<M;i++){
		printf("%s\n",answerList[i]);
	}



return 0;
}