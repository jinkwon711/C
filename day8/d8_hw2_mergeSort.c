#include <stdio.h>

int Arr[100001];
int temp[100001];

void merge(int arr[], int start, int mid, int end){
    int s = start;
    int s2 = mid;
    int i= start;

    for(; s<=mid-1 && s2<=end;i++){
        if(arr[s]>=arr[s2]){
            temp[i]=arr[s++];
        }
        else{
            temp[i] = arr[s2++];
        }
    }
    while(s2<=end){
        temp[i++] = arr[s2++];
    }
    while(s<=mid-1){
        temp[i++] = arr[s++];
    }
    for(int i=start;i<=end;i++){
        arr[i] = temp[i];
    }
}
void mergesort(int arr[], int start, int end){

    if((end-start)<2){
        if(arr[start]<arr[end]){
            int temp ;
            temp = arr[end];
            arr[end] = arr[start];
            arr[start] = temp;
        }
        return;
    }
    int middle =(start+end)/2;
    mergesort(arr,start,middle-1);
    mergesort(arr,middle,end);
    merge(arr,start,middle,end);
}


int main(){
    int input;
    scanf("%d",&input);
    for(int i=0; i!=input; i++){
        scanf("%d",&Arr[i]);
    }

mergesort(Arr,0,input-1);

for(int i=0; i!=input;i++){
        printf("%d ",Arr[i]);
    }
    return 0;

}

