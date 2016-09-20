#include <stdio.h>

int main(void)
{
    int arr1[3]={1,2,3};
    double arr2[3]={1.1, 2.2, 3.3};

    printf("%d, %g \n", *arr1, *arr2);
   
   printf("%d\n", *(arr1+1));

    return 0;
}
