#include <stdio.h>
#include <stdlib.h>

#define MAXDEG 2222
struct poly{
	int n;
	long long coeff[MAXDEG];
};
typedef struct poly input;


int main(){
	int n,m;
	scanf("%d %d",&n,&m);

	input *f1 =  malloc(sizeof(input));
	input *f2 = malloc(sizeof(input));
	input *answer = malloc(sizeof(input));

	for(int i=0; i<n+1; i++){
		scanf("%lld",&f1->coeff[i]);
	}
	for(int i=0; i<m+1; i++){
		scanf("%lld",&f2->coeff[i]);
	}

	for(int i=0; i<n+1;i++){
		for(int j=0; j<m+1;j++){
			answer->coeff[i+j]+=(f1->coeff[i]*f2->coeff[j]);
		}
	}


	for(int i=0; i<n+m+1;i++){
		printf("%lld ",answer->coeff[i]);
	}

	return 0;
}