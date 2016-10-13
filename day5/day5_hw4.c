#include <stdio.h>
#include <stdlib.h>


int main(){
  int arr[500][2];
  int i,x,y,k,j;
  double x1,x2,x3,y1,y2,y3;
  int num;
  scanf("%d",&num);
  for(i=0;i!=num;i++){
    scanf("%d",&x);
    scanf("%d",&y);
    arr[i][0]=x;
    arr[i][1]=y;
  }
  double area=0;
  double temp;
  for(i=0;i!=num;i++){
    for(j=0;j!=num;j++){
      for(k=0;k!=num;k++){
        if(i!=j&&j!=k&&k!=i){
          x1=arr[i][0];
          y1=arr[i][1];
          x2=arr[j][0];
          y2=arr[j][1];
          x3=arr[k][0];
          y3=arr[k][1];
          temp =abs(x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1)/2.00;
          if(area<temp){
            area=temp;
          }
        }
      }
    }
  }


  printf("%.2f\n",area);
  return 0;
}
