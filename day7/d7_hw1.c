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

  bool flag;
  int k,l;
  for(k=0;k<strlen(x);k++){
    for(i=0; i!=strlen(y);i++){
      if(!(k+i)<strleng(x)) break;
      if(!((y[i]==x[k+i])||(y[l]=='?'))){
        flag=false;
      }
    if(flag){
      for(i=0; i<strlen(y);i++){
        x[i+k]=z[i];
      }
      k+=strlen(y);
    }
  }
}

  int j;

  for(j=0; j<strlen(x);j++){
    printf("%c",x[j]);
  }
  printf("\n");
}
