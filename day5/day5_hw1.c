#include <stdio.h>

long long fib(int num){
  if(num==0){
    return 0;
  }
  if(num==1|| num==2){
    return 1;
  }
  int i;
  long long fib1=1;
  long long fib2=1;
  long long fib3=2;

  for(i=3; i!=num;i++){
    fib1=fib2;
    fib2=fib3;
    fib3=fib1+fib2;
  }
  return fib3;



}

int main(void){
  long long answer;
  int num;
  scanf("%d",&num);

  answer = fib(num);

  printf("%lld\n",answer);



  return 0;
}
