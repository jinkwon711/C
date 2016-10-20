#include <stdio.h>

void bubble_sort(int *a,int x,int y){
  int i,j;
  for(i=x; i!=y;i++){
    for(j=x; j!=y;j++){
      if(a[j]>a[j+1]){
        int temp  = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}

int main(void){
  int A[1000];
  int n,m,i,j;
  int command, x, y;
  scanf("%d",&n);
  for(i=0; i!=n; i++){
    scanf("%d",&*(A+i));
  }

  scanf("%d",&m);
  for(i=0; i!=m; i++){
    scanf("%d",&command);
    scanf("%d",&x);
    scanf("%d",&y);

    if(command == 0){
      int temp=*(A+x);
      *(A+x) = *(A+y);
      *(A+y) = temp;
    }
    else if(command==1){
      for(j=0; j!=n;j++){

        if(*(A+j)==x){
          *(A+j)=y;
        }
      }
    }
    else if(command ==2){
      int temp = *(A+y);
      for(j=y; j!=x;j--){
        *(A+j)=*(A+j-1);
      }
      *(A+x)=temp;
    }
    else if(command ==3){
      bubble_sort(A,x,y);

    }

  }





  for(i=0; i!=n; i++){
    printf("%d ",*(A+i));
  }



  return 0;
}
