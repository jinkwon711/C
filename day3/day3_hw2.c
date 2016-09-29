#include <stdio.h>
#include <string.h>

int main(){
	char a[]="C is a general-purpose, imperative computer programming language,supporting structured programming, lexical variable scope and recursion, while a static type system prevents many unintended operations .";
	char b[4];
	int cnt=0;
	scanf("%s",b);



	for(int i =0 ; i!=strlen(a)-2; i++){
		if(a[i]==b[0]){
			if(a[i+1]==b[1]){
				if(a[i+2]==b[2]){
					cnt++;
				}	
			}	
		}
	}

	printf("%d\n",cnt);

	return 0;
}
