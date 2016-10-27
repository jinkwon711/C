#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  char *wordList[1000];

int main(){
  char c;
  int a;
  int currQuery=1;
  char query[1000];
  char *input[101];
  char *ptr;
  int i,k,l;
  int j;
  int arrlen=0;

  for(i=0; i<1001;i++){
    wordList[i]=0;
  }
  for(i=0; i<101;i++){
    input[i]=0;
  }

  i=0;
  scanf("%d\n",&a);

  while(1){
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
  while(ptr != NULL ){
          // printf( "%s\n" , ptr);
          ptr = strtok(NULL, " ");
          input[j]=ptr;
          j++;
  }
  // printf("%d\n",j);
  if(!strcmp("insert",input[0])){
    for(i=0; i<j-2;i++){
     wordList[arrlen+i]= (char *) malloc(strlen(input[i+1])*sizeof(char));
           strcpy(wordList[arrlen+i],input[i+1]);
      // free(wordList[arrlen+i]);
     // printf("%s\n",wordList[arrlen+i]);
         // printf("%s\n",wordList[0]);


     // input[i+1]=0;
   }

   arrlen+=(j-2);
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
    for(i=0;i<arrlen;i++){
      if(!strcmp(input[1],wordList[i]))
        printf("%d\n",i);
    }

    for(i=0;i<arrlen-1;i++){
      for(j=0;j<arrlen-1;j++){
        if(strlen(wordList[i])>strlen(wordList[i+1])){
          char *temp = (char *)malloc(((strlen(wordList[i])+strlen(wordList[i+1])) + 1) * sizeof(char));
          strcpy(temp,wordList[i]);
          strcpy(wordList[i],wordList[i+1]);
          strcpy(wordList[i+1],temp);
          free(temp);

        }
      }
    }
  }
  else if(!strcmp("print",input[0])){
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