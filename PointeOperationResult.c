#include <stdio.h>

int main(void)
{
	int arr1[3];
	double arr2[3];

	int *ptr1= &arr1[0];
	double *ptr2=&arr2[0];

	printf("%p %p \n", ptr1+1, ptr1+2);
	printf("%p,%p \n", ptr2+1, ptr2+2);

	return 0;
}
