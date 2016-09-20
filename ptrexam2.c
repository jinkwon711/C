#include <stdio.h>

int main(void)
{
    int num1=10;
    int num2=20;

    int *ptr1=&num1;
    int *ptr2=&num2;

    * ptr1 += 10 ;
    *ptr2 -= 10 ;

    int * temp;
    temp=ptr1;
    ptr1=ptr2;
    ptr2=temp;

    printf("포인터1값은 %d", *ptr1);
    printf("포인터2값은 %d", *ptr2);

    return 0;

}
