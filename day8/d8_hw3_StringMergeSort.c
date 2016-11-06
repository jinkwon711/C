#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *Arr[10000];
char *temp[10000];



void merge(char **arr, int start, int mid, int end){

    int s = start;
    int s2 = mid;
    int i= start;
    // printf("top of merge");

    for(; s<=mid-1 && s2<=end;i++){
        if(strcmp(arr[s],arr[s2])<0){
            // strcpy(arr[s++],temp[i]);
            temp[i]=arr[s++];
            // printf("%s", temp[i]);

            // swap(arr[s2],arr[s++]);
            // printf("%s\n",arr[s2]);
        }
        else{
            temp[i] =arr[s2++];

            // swap(arr[s],arr[s2++]);
        }
    }
    while(s2<=end){
        temp[i++] = arr[s2++];

        // swap(arr[s++],arr[s2++]);
    }
    while(s<=mid-1){
        temp[i++] = arr[s++];

        // swap(arr[s2++],arr[s++]);
    }
    for(int i=start;i<=end;i++){
        arr[i] =  temp[i];
        // printf("%s ",arr[i]);
    }
    // printf("\n");
    return;
};
void mergeSort(char **arr, int start, int end){
    // printf("%s : %s\n",arr[start],arr[end]);
    if((end-start)<2){
        if(strcmp(arr[start],arr[end])>0){
            temp[9999] = arr[end];
            arr[end] = arr[start];
            arr[start] = temp[9999];
            // printf("after swap \n%s : %s \n",arr[start],arr[end]);
        }
        return;
    }
    // printf("print all words in the arr\n");
    // for(int i=0; i!=5; i++){
        // printf("%s ", arr[i]);
    // }
    // printf("\n");
    int middle =(start+end)/2;
    mergeSort(arr,start,middle-1);
    mergeSort(arr,middle,end);
    merge(arr,start,middle,end);
    return;
};


int main(void){
    int input;
    scanf("%d",&input);
    // char **Arr = (char **)malloc(sizeof(char*)*(input+10));

    for(int i=0; i!=input; i++){
        Arr[i] = malloc(150*sizeof(char));
        temp[i] = malloc(150*sizeof(char));

    }

    // if(strcmp("best","faker")<0){
        // printf("hi");
    // }
    for(int i=0; i!=input; i++){
        scanf("%s",Arr[i]);
    }

    mergeSort(Arr,0,input-1);




int i;
for(i=0; i!=input;i++){
        printf("%s ",Arr[i]);
    }

    return 0;


}

