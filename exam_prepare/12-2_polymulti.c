#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXDEG 2222

struct poly
{
	int n;
	long long coeff[MAXDEG];
};
typedef struct poly poly;

int main(){

	int N,M;
	scanf("%d %d",&N,&M);
	poly *polyA = malloc(sizeof(poly));
	poly *polyB = malloc(sizeof(poly));
	polyA->n = N;
	polyB->n = M;
	poly *polyC = malloc(sizeof(poly));
	for(int i=0;i<N+1;i++){
		scanf("%lld",&polyA->coeff[i]);
	}
	for(int i=0;i<M+1;i++){
		scanf("%lld",&polyB->coeff[i]);
	}
	for(int i=0;i<M+1+N;i++){
		polyC->coeff[i]=0;
	}


	for(int i=0;i<N+1;i++){
		for(int j=0; j<M+1;j++){
			polyC->coeff[i+j] += polyA->coeff[i]*polyB->coeff[j];
		}
	}

	for(int i=0; i<N+M+1;i++){
		printf("%lld ",polyC->coeff[i]);
	}
	


return 0;
}