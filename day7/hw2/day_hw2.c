#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
 int i,k,l;
  int j;
  int isExist=0;
  int arrlen=0;
  int addlen=0;
  char *wordList[1000];
void order(){

  for(j=0;j<arrlen-1;j++){
      for(i=0;i<arrlen-1;i++){
        if(strlen(wordList[i])>strlen(wordList[i+1])){
          char *temp = (char *)malloc(((strlen(wordList[i])+strlen(wordList[i+1])) + 1) * sizeof(char));
          strcpy(temp,wordList[i]);
          strcpy(wordList[i],wordList[i+1]);
          strcpy(wordList[i+1],temp);
          free(temp);
        }
        else if(strlen(wordList[i])==strlen(wordList[i+1])){
          if(strcmp(wordList[i],wordList[i+1])>0){
            char *temp = (char *)malloc(((strlen(wordList[i])+strlen(wordList[i+1])) + 1) * sizeof(char));
              strcpy(temp,wordList[i]);
              strcpy(wordList[i],wordList[i+1]);
              strcpy(wordList[i+1],temp);
              free(temp);
          }
        }
      }
    }
}
int main(){
  char c;
  int a;
  int currQuery=1;
  char query[1000];
  char *input[101];
  char *ptr;


  for(i=0; i<1001;i++){
    wordList[i]=0;
  }
  for(i=0; i<101;i++){
    input[i]=0;
  }

  i=0;
  scanf("%d\n",&a);

  while(1){
    if(a==currQuery-1){
          break;
        }
        currQuery++;


  for(i=0; i<1000;i++){
    query[i]=0;
  }
  i=0;
  while((c=getchar())!=EOF){
      if(c=='\n'){
        query[i]='\0';
        break;
      }
      query[i]=c;
      i++;

  }

  ptr = strtok(query, " ");
  input[0] = ptr;
  j=1;
  int flags = 1;
  while(ptr != NULL ){
          // printf( "%s\n" , ptr);
          ptr = strtok(NULL, " ");

          // for(i=1;i<j;i++){
          //   if(!strcmp(ptr,input[i-1])){
          //     flags=0;
          //   }
          // }
          if(flags){
          input[j]=ptr;
          j++;

        }
        // flags =1;
   }


  // printf("%d\n",j);
  if(!strcmp("insert",input[0])){
    for(i=0; i<j-2;i++){
      for(k=0; k<arrlen;k++){
        if(!strcmp(wordList[k],input[i+1])){
          isExist = 1;
        }
      }
      if(!isExist){
        wordList[arrlen]= (char *) malloc(strlen(input[i+1])*sizeof(char));
         strcpy(wordList[arrlen],input[i+1]);
         arrlen++;
      }
      isExist=0;

    }
  }
  else if(!strcmp("delete",input[0])){

    int cnt=0;
    for(i=0; i<j-2;i++){
      for(k=0; k<arrlen;k++){
        if(!strcmp(input[i+1],wordList[k])){
          cnt++;
          for(l=k;l<arrlen;l++){
            // free(wordList[l]);
            wordList[l]=wordList[l+1];

          }
        }
        arrlen-=cnt;
        cnt=0;
      }


   }

  }
  else if(!strcmp("find",input[0])){
        order();

    for(i=0;i<arrlen;i++){
      if(!strcmp(input[1],wordList[i]))
        printf("%d\n",i);
    }

  }
  else if(!strcmp("print",input[0])){
    order();
    for(i=0; i<arrlen;i++){
      printf("%s ",wordList[i]);
    }
    printf("\n");

  }
  else if(!strcmp("end",input[0])||(a==currQuery)){
    break;
  }
}

  return 0;

}