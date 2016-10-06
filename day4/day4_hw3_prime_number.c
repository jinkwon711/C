#include <stdio.h>
#include <string.h>

int main(){
int i =0;
int j =0;
int cnt =0;
int cnt2=0;
double number;
for(i=2;i!=1000;i++){
  cnt=0;
  for(j=2; j!=i;j++){
    number=(double)i;
    if((number/j)-(i/j)==0){
      cnt++;
      break;
    }
  }
  if(cnt==0){
    printf("%d\n",i);
    cnt2++;
  }
}

  return 0;
}
