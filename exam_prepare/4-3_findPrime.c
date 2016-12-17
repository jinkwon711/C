#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


int prime = 1;
	for(int i=2; i<1000;i++){
		for(int j=2; j<i;j++){
			if(i-(i/j)*j==0){
				prime =0;
				break;
			}
		}
		if(prime ==1){
			printf("%d\n",i);
		}
		prime = 1;
	}
return 0;

}