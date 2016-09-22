#include <stdio.h>

int main(void){
    int x;
    int sum = 0;
    int cnt = 0;
    double result;
    while(scanf("%d",&x)!=EOF){
        sum += x;
        cnt++;
    }

    result = (double)sum/cnt;

    printf("%f\n", result);
    return 0;
}