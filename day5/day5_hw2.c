#include <stdio.h>


long long choice(int n, int k){
  if(k==n){
    return 1;
  }else if(k>n){
    return 0;
  }
  if(k==0){
    return 1;
  }

  return choice(n-1,k-1)+choice(n-1,k);





}

int main(){
  long long answer;
  int n;
  int k;
  scanf("%d",&n);
  scanf("%d",&k);


  answer = choice(n,k);

  printf("%lld\n",answer);



  return 0;


}
