#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);

  int i;
  int j;


  for(i=0;i!=2*n-1;i++){
    for(j=0;j!=2*n-1;j++){
      if(i<n){
        if(2*n-i-1==j){
          break;
        }
        if(i>j){
          printf("%c",' ');
        }
        else{
          printf("%c",'*');
        }
      }
      else if(n-2==i){
        printf("%c",' ');
        if(j==n-1){
          printf("%c", '*');
          break;
        }
      }
      else{
        if(i==j-1){
          break;
        }
        if(j<2*n-i-2){
          printf("%c",' ');
        }
        else{
          printf("%c",'*');
        }
      }
    }
    printf("\n");
  }


  return 0;
}
