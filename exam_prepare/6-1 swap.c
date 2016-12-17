#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *X,int *Y){
	int temp = *X;
	*X = *Y;
	*Y = temp;
}

int main(){
	int X,Y;
	scanf("%d %d",&X,&Y);
	
	swap(&X,&Y);

	printf("%d %d",X,Y);	


return 0;
}