#include <stdio.h>

int main(void)
{

int arr[2]={1,2};

int *ptr = arr;

for(int i=0 ;  i<2; i++){
    ptr[i]++;
    }

printf("%d, %d\n",*(arr+0),*(arr+1));

}
