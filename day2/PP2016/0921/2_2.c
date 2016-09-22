#include <stdio.h>

int main(void){
    int x;
    int max = -1;
    int second = -1;
    int third = -1;
    while(scanf("%d",&x)!=EOF){
        if(x == max || x== second || x ==third){
            continue;
        }
        if(x>max){
            third = second;
            second = max;
            max = x;
        }
        else if(x>second){
            third = second;
            second = x;
        }
        else if(x>third){
            third = x;
        }

    }
    printf("%d\n", third);
    return 0;
}