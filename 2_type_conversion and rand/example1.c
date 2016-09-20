#include <stdio.h>

int main(void)
{
	int a = 0;
	int sum = 0;
	int max = INT_MIN;
	int second  = 0;
	while(scanf ("%d", &a)!=EOF){
		sum += a ;

		if(max < a){
			max = a;
		}

	}

	printf("숫자의합은 : %d\n", sum);
	printf("최대값은   : %d\n", max);
	return 0;
}

