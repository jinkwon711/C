#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	srand((unsigned)time(NULL));//srand 는 초기값을 생성하는 시드를 설정해주는 것
	for(int i=0 ; i<10 ; i++){
		printf("%f\n", (double)rand()/RAND_MAX);
		}


return 0;
}
