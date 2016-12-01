#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
	FILE *in,*key,*out;

	in = fopen(argv[1],"r");
	key = fopen(argv[2],"r");
	out = fopen(argv[3],"w");

	char pattern[256];
	fscanf(key,"%s",pattern);
	char str[256];
	int notEqual;
	int first =0;
	int second = 0;
	while(fscanf(in,"%s",str)!=EOF){
		first++;
// printf("%s",str);
		notEqual=0;
		for(int i=0; i!=strlen(str);i++){
			if(pattern[0]==str[i]){
				second = i+1;
				if(strlen(pattern)<=strlen(str)-i){
					for(int j=1; j!=strlen(pattern);j++){
						if(pattern[j]!=str[i+j]){
							notEqual=1;
							break;
						}
					}
				if(notEqual) break;
				else{
					fprintf(out,"%d %d\n",first,second);
				}	
				}
			}
		}


	}

	return 0;
}