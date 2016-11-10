#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	int x;
	int y;
	int r;
} CIRCLE;

int powDistance(CIRCLE *a, CIRCLE *b){
	return pow(b->x-a->x,2) + pow(b->y-a->y,2);
}
int main(){
	int N,Q,A,B;
	scanf("%d%d",&N,&Q);



	CIRCLE *arrPtr = malloc(sizeof(int)*3*N);

	for(int i=0; i!=N; i++){
		CIRCLE temp;
		scanf("%d%d%d",&temp.x,&temp.y,&temp.r);
		arrPtr[i] = temp;

	}


	for(int i=0; i!=Q; i++){
		
		scanf("%d%d",&A, &B);
		CIRCLE CirA = arrPtr[A];
		CIRCLE CirB = arrPtr[B];

		if(powDistance(&CirA,&CirB)<pow(CirA.r+CirB.r,2)){
			if(powDistance(&CirA,&CirB)>pow(CirA.r-CirB.r,2)){
			printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
		else{
			printf("no\n");
		}
	}

	// int arrN = ()
	return 0;
}