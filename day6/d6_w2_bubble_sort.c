#include <stdio.h>

void bubble_sort(int *a,int num){
  int i,j;
  for(i=0; i!=num-1;i++){
    for(j=0; j!=num-1;j++){
      if(a[j]>a[j+1]){
        int temp  = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }


}
int main()
{
    int n, i, a[10000];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubble_sort(a, n);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
