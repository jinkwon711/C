#include <stdio.h>


int main(int argc,char *argv[]){
	FILE *in, *out;

	in =fopen(argv[1],"r");
	out = fopen(argv[2],"w");
	int n;
	int sum=0;
	while(fscanf(in,"%d",&n)!=EOF){
		sum +=n;
	}

	fprintf(out,"%d",sum);
	fclose(in);
	fclose(out);


	return 0;

}