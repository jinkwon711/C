#include <stdio.h>


int main(){
  int i,k,j;
  int num;
  int score;
  int arr[2000];
  int result[2000];
  scanf("%d",&num);

  for(i=0; i!=num; i++){
    scanf("%d",&k);
    arr[i]=k;
    result[i]=num;
  }

  for(i=0; i!=num; i++){
    for(j=0; j!=num;j++)
    if(arr[i]>arr[j])
      result[i]--;
  }
  for(i=0; i!=num; i++){
    for(j=0; j!=num;j++){
      if(arr[i]==arr[j]&&i!=j){
        result[i]--;
      }
    }
  }

  for(i=0; i!=num; i++){
    printf("%d ",result[i]);
  }

  return 0;
}
