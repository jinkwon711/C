#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
	FILE *in,*out;

	in = fopen(argv[1],"r");
	out = fopen(argv[2],"w");
	int sum;
	int num;
	//while(fscanf(in,"%d",&num)!=EOF){
	//	sum+=num;
	//}
	char *string = malloc(sizeof(char)*1000);
	fgets(string,1000,in);

	char *token;
	token = strtok(string," ");
	while(token!=NULL){
	    sum+=atoi(token);
	    token = strtok(NULL," ");
	}
	fprintf(out,"%d",sum);


	fclose(in);
	fclose(out);
return 0;
}
