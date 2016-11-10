#include <stdio.h>


int binarySearch(int *a, int start, int end, int value){
	
	int mid = (start+end)/2;
	if(start>end) return -1;
	if(a[mid]>value){
		return binarySearch(a,start,mid-1,value);
	}
	else if(a[mid]<value){
		return binarySearch(a, mid+1, end,value);
	}
	else{
		return mid;
	}
}

int main(){
	

	int a[10] = {4,6,7,8,9,10,12,16,21,52};

	int q =0;
	int result =0;
	scanf("%d",&q);
	
	result = binarySearch(a,0,9,q);
	printf("%d\n", result);

}