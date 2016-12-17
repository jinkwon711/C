#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int inputNum;

	scanf("%d",&inputNum);

	for(int i=0; i<2*inputNum-1;i++){
		if(i<inputNum){
			for(int j=0; j<i;j++){
				printf(" ");
			}
			for(int j=0; j<2*inputNum-1-2*i;j++ ){
				printf("*");
			}
			printf("\n");

		}
		else{
			for(int j=0; j<inputNum*2-i-2;j++){
				printf(" ");
			}
			for(int j=0; j<2*i-inputNum*2+3;j++){
				printf("*");
			}
			printf("\n");
		}

	}


return 0;
}