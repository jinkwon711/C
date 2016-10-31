#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


int main(){

    int i,j,l,k;
    int n;
    int number;
    int temp;
    int **arr1=NULL;
    int **arr2=NULL;
    int **arr3=NULL;


    scanf("%d",&n);
    arr1 = (int **)malloc(n*sizeof(int*));
    arr2 = (int **)malloc(n*sizeof(int*));
    arr3 = (int **)malloc(n*sizeof(int*));



    for(i=0; i<n; i++){
        arr1[i] = (int*) malloc(n*sizeof(int));
    }
    for(i=0; i<n; i++){
        arr2[i] = (int*) malloc(n*sizeof(int));
    }
    for(i=0; i<n; i++){
        arr3[i] = (int*) malloc(n*sizeof(int));
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&number);
            arr1[i][j] = number;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&number);
            arr2[i][j] = number;
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                temp+=arr1[i][k]*arr2[k][j];
            }
            arr3[i][j] = temp;
            temp=0;
        }
    }



    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }

    free(arr1);
    free(arr2);
    free(arr3);

}
