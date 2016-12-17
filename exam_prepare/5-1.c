#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
long long answer=0;
int N;
scanf("%d",&N);
long long temp=0;
long long f1, f2, f0;
f0 = 0;
f1 = 1;
for(int i=1; i<N;i++){
	f2 = f0+f1;
	f0 = f1;
	f1 = f2;
}
printf("%lld",f2);
return 0;
}