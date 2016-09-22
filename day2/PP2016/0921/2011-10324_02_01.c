#include <stdio.h>

int main(void){
	int x;
	int max = -1;
	int second = 0;
	while(scanf("%d",&x)!=EOF){
		if(x>max){
			second = max;
			max = x;
		}
	}
	printf("%d\n", second);
	return 0;
}



