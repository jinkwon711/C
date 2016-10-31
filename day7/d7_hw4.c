#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

int combination(int n, int r) {

        if(n == r || r == 0) return 1;
        else {
            return combination(n - 1, r - 1) + combination(n - 1, r);
        }

    }


int main(){

    int i,j,l,k;
    int n;
    char character;
    int answer;
    char **arr=NULL;
    int cnt=0;


    scanf("%d",&n);


    arr = (char **)malloc(n*sizeof(char*));
    for(i=0; i<n; i++){
        arr[i] = (char*) malloc(n*sizeof(char));
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            do{character = getchar();
            }while(character=='\n');
            arr[i][j] = character;
        }
    }
// horizontally
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j][i]=='Q'){
                cnt++;
            }
        }
        if(cnt>=2){
            answer +=combination(cnt,2);
        }
        cnt=0;
    }
    //vertically
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]=='Q'){
                cnt++;
            }
        }
        if(cnt>=2){
            answer +=combination(cnt,2);
        }
        cnt=0;
    }

    //diagonally'

    for(i=0;i<n;i++){
        int k =i;
        int l =0;
        while(k<0){
            if(arr[k][l]=='Q'){
                cnt++;
            }
            k--;
            l++;
        }
        if(cnt>=2){
        answer +=combination(cnt,2);
        }
    }
    for(i=0;i<n;i++){
        int k =i;
        int l =n-1;
        while(l<n){
            if(arr[l][k]=='Q'){
                cnt++;
            }
            k--;
            l++;
        }
        if(cnt>=2){
        answer +=combination(cnt,2);
        }
    }


    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         printf("%c",arr[i][j]);
    //     }
    //     printf("\n");
    // }


    printf("%d\n",answer);

}
