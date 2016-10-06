#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
  char word[1001];
  scanf("%s", word);
  int i;

  for(i=0; word[i]!='\0'; i++){
    if(islower(word[i])){
      word[i]=(char)toupper(word[i]);
    }
    else{
      word[i]=(char)tolower(word[i]);
    }
  }
  printf("%s\n",word);
  return 0;
}
