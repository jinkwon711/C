#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long choice(int N , int K){
	if(K ==0) return 1;
	if(N ==0) return 0;
	return choice(N-1,K-1)+choice(N-1,K);

}

int main(){
	int N,K;
	scanf("%d %d",&N,&K);
	printf("%lld",choice(N,K));
	return 0;
}