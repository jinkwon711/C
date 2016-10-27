#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char x[1001];
  char y[1001];
  char z[1001];
  int i=0;
  char c;
  while((c=getchar())!=EOF){
    if(c=='\n'){
      x[i]='\0';
      break;
    }
    x[i]=c;
    i++;
  }
  i=0;
  while((c=getchar())!=EOF){
    if(c=='\n'){
      y[i]='\0';
      break;
    }
    y[i]=c;
    i++;
  }
  i=0;
  while((c=getchar())!=EOF){
    if(c=='\n'){
      z[i]='\0';
      break;
    }
    z[i]=c;
    i++;
  }

  int flag;
  int k;
  int j;
  for(k=0;k+strlen(y)<strlen(x)+1;k++){
    for(i=0; i<strlen(y);i++){
      if((y[i]==x[k+i])||(y[i]=='?')){
        flag++;
      }
    }
    if(flag==strlen(y)){
      for(j=0; j<strlen(y);j++){
        x[j+k]=z[j];
      }
      k+=(strlen(y)-1);
    }
    flag=0;
  }

  j=0;
  for(j=0; j<strlen(x);j++){
    printf("%c",x[j]);
  }
  printf("\n");
}
