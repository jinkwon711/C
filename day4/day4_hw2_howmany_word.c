#include <stdio.h>
#include <string.h>

int main(){
  char word[200];
  char givenString[200];
  scanf("%s", givenString);
  scanf("%s", word);
  int cnt=0;
  int i;
  int j=0;
  int wordlength=0;
  int stringlength=0;

  for(i=0; word[i]!='\0';i++){
    wordlength++;
  }
  for(i=0; givenString[i]!='\0';i++){
    stringlength++;
  }

  for(i=0; stringlength-wordlength+1!=i; i++){
      while(givenString[i+j]==word[j]){
        if(j+1==wordlength){
          cnt++;
          j=0;
          break;
        }
        j++;
      }
    }

  printf("%d\n",cnt);

  return 0;
}
