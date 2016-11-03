#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long long tonumber(char *str){
  int l = strlen(str);
  unsigned long long ret = 0;
  for(int i=0; i<l;i++){
    if(str[i]=='1'){
      ret+= (1LL<<l-i-1);
    }
  }
  return ret;
}


int main(){

  char *str[1000];//각각의 포인터가 들어갈곳.
  int n,m,n1,n2;
  char query[10];
  unsigned long long answer;
  unsigned long long NUMB[1000];
  int num[1000];
  scanf("%d%d",&n,&m);
  for(int i=0; i<n; i++){
    str[i] = (char *)malloc(65*sizeof(char));
  }
  for(int i=0; i<n;i++){
    scanf("%s",str[i]);
     NUMB[i] = tonumber(str[i]);
  }
  int len = strlen(str[0]);

   for(int i=0; i<m; i++){
     scanf("%s %d %d",query,&n1,&n2);
     if(strcmp(query,"and")==0){
       answer=(NUMB[n1]&NUMB[n2]);
     }
     else if(strcmp(query,"or")==0){
       answer=(NUMB[n1]|NUMB[n2]);
     }
     else if(strcmp(query,"xor")==0){
       answer=(NUMB[n1]^NUMB[n2]);
     }
     else if(strcmp(query,"right")==0){
       answer=(NUMB[n1]>>n2);
     }else if(strcmp(query,"left")==0){
       answer=(NUMB[n1]<<n2);
     }

     for(int j=len-1;j>=0; j--){
       if(((1LL<<j)&answer) !=0){
         printf("1");
       }
       else{
         printf("0");
       }
     }
     printf("\n");
 }



  return 0;
}
