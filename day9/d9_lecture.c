#include <stdio.h>
#include <string.h>


void stringToInteger(char *src, int *dest){

	int len = strlen(src);
	int base = 1;


	for(int i=len-1; i>=0;i--){
		if(src[i]=='1') *dest+= base;
		base*=2;
	}
}

void intergerToString(int *src, char *dest, int len){
	unsigned int mask = 1<<len;
	*(dest+len) = '\0';
	while(mask>>=1){
		*dest++ = (mask&(*src))?'1':'0';
	}

}


int main(){


	char buf[10];
	int value=0;
	scanf("%d",&value);
	
	intergerToString(&value,&buf,5);
	// stringToInteger(buf, &value);
	printf("%s\n",buf);



	return 0;
}