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
	int Equal=0;
	int first =0;
	int second = 0;
	int k=0;


	while(fscanf(in,"%s",str)!=EOF){
		// printf("%s\n",str);
		// printf("%s\n",pattern);
		first++;
		int loopsize= strlen(str)-strlen(pattern)+1;
		if(loopsize<0) continue;
		for(int i=0; i<loopsize;i++){
			if(pattern[0]==str[i]){
				// printf("%c\n",str[i]);
				// printf("%c\n",pattern[0]);


				second = i+1;
				Equal=1;
					for(int j=1; j!=strlen(pattern);j++){
						if(pattern[j]!=str[i+j]){
							Equal=0;
							break;
						}
					}

				if(Equal){
					fprintf(out,"%d %d\n",first,second);
					// printf("%d %d\n",first,second);

					Equal=0;
				}
			}
		}
	}

	fclose(in);
	fclose(key);
	fclose(out);

	return 0;
}
