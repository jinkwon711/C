#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _board{
	int tile[4][4];
} board;


board *history[];
void print(board *a){
	int i,j;
	printf("-----------------------------\n");
	for(i = 0; i < 4; ++i){
		printf("|      |      |      |      |\n|");
		for(j = 0; j < 4; ++j){
			if(a->tile[i][j] == 0) printf("      |");
			else printf("%6d|", a->tile[i][j]);
		}
		printf("\n|      |      |      |      |\n");
		printf("-----------------------------\n");
	}
	return;
}

int main(){
	board *curr = (board *) malloc(sizeof(board));
	board *next;
	int procedure;
	int flag =0;
	int n, N;
	int i, j, k;
	int idx=0;

	char com[10];
	scanf("%d", &N);
	for(i = 0; i < 4; ++i){
		for(j = 0; j < 4; ++j){
			scanf("%d", &curr->tile[i][j]);
		}
	}
	for(n = 0; n < N; ++n){
		print(curr);
		next = (board *) calloc(1, sizeof(board));
		scanf("%s", com);
		switch(com[0]){
		case 'w':
		for(int j=0;j<4;j++){
			idx = 0;
			for(int i=0;i<4;i++){
				if(curr->tile[i][j]!=0&&i!=3){
					int k = i;
					while(curr->tile[k+1][j]==0&&k!=2){
						k++;
					}
					if(curr->tile[k+1][j]==curr->tile[i][j]){
						next->tile[idx][j] =curr->tile[i][j]*2;
						idx++;
						i=k+1;
					}
					else{ 
						next->tile[idx][j] = curr->tile[i][j];
						idx++;
					}
				}
				else if(i==3){
					next->tile[idx][j] = curr->tile[3][j];
				}
			}
		}

			break;
		case 'a':
			for(int i=0;i<4;i++){
				idx = 0;
				for(int j=0;j<4;j++){
					if(curr->tile[i][j]!=0&&j!=3){
						int k = j;
						while(curr->tile[i][k+1]==0&&k!=2){
							k++;
						}
						if(curr->tile[i][k+1]==curr->tile[i][j]){
							next->tile[i][idx] =curr->tile[i][j]*2;
							idx++;	
							j=k+1;
						}		
						else{
							next->tile[i][idx] = curr->tile[i][j];
							idx++;	
						}
					}
					else if(j==3){
						next->tile[i][idx] = curr->tile[i][3];
					}
				}
			}


			break;
		case 's':
			for(int j=0;j<4;j++){
				idx = 3;
				for(int i=3;i>=0;i--){
					if(curr->tile[i][j]!=0&&i!=0){
						int k = i;
						while(curr->tile[k-1][j]==0&&k!=1){
							k--;
						}
						if(curr->tile[k-1][j]==curr->tile[i][j]){
							next->tile[idx][j] =curr->tile[i][j]*2;
							idx--;
							i=k-1;
						}
						else{
							next->tile[idx][j] = curr->tile[i][j];
							idx--;
						}
					}
					else if(i==0){
						next->tile[idx][j] = curr->tile[0][j];
					}
				}
			}




			break;
		case 'd':
		for(int i=0;i<4;i++){
			idx = 3;
			for(int j=3;j>=0;j--){
				if(curr->tile[i][j]!=0&&j!=0){
					int k = j;
					while(curr->tile[i][k-1]==0&&k!=1){
						k--;
					}
					if(curr->tile[i][k-1]==curr->tile[i][j]){
						next->tile[i][idx] =curr->tile[i][j]*2;
						idx--;						
						j=k-1;
					}
					else{
						next->tile[i][idx] = curr->tile[i][j];
						 idx--;
					}
				}
				else if(j==0){
					next->tile[i][idx] = curr->tile[i][0];							
				}
			}
		}
		break;

		case 'u':	
		if(procedure!=0){
			curr = history[--procedure];
		}
			flag = 1;
		break;

		case 'q':
			return 0;
		break;

		}
		if(flag!=1){
			history[procedure] = malloc(sizeof(board));
			history[procedure]=curr;
			// free(curr);
			curr = next;
			procedure++;
		}
		flag =0;

	}
	print(curr);


	for(int i=0; history[i+1]!=NULL;i++){
		free(history[i]);
	}
	return 0;
}