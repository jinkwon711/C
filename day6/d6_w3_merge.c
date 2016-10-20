#include <stdio.h>

void merge(int *C,int *A,int *B,int sizeA,int sizeB){
  int i,j=0,k=0;
  for(i=0;i!=sizeA+sizeB;i++){
  if(j<sizeA&& k<sizeB){
    if(*(A+j)<*(B+k)){
      C[i]=*(A+j);
      j++;
    }
    else{
      C[i]=*(B+k);
      k++;
    }
  }
  else if(j>=sizeA){
      C[i]=*(B+k);
      k++;
  }else if(k>=sizeB){
      C[i]=*(A+j);
      j++;
  }

  }
}

int A[1000000], B[1000000], C[2000000];
int main(void)
{
    int n, m, i;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    for (i = 0; i < m; i++)
        scanf("%d", &B[i]);

    merge(C, A, B, n, m);
    for (i = 0; i < n + m; i++)
        printf("%d ", C[i]);

    return 0;
}
