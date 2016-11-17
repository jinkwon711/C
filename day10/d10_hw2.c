#include <stdio.h>
#include <stdlib.h>

typedef int data;
struct linked_list{
	data d;
	struct linked_list* next;
};
typedef struct linked_list node;
typedef node* link;

link insert(data input){


	link temp = malloc(sizeof(node));
	temp->d = input;
	temp->next = NULL;
	return temp;
}
void delete(link curr,int inputData){
	while(curr->next!=NULL){
		if(curr->next->d==inputData){
			link temp = curr->next;
			curr->next = curr->next->next;
			free(temp);
			break;
		}
		curr= curr->next;
	}
}

int main(){
	int N;
	int command;
	int inputData;

	link head,curr;
	head =malloc(sizeof(node));
	head->next = NULL;
	curr =malloc(sizeof(node));
	scanf("%d", &N);

	for(int i=0; i!=N;i++){
		scanf("%d", &command);
		if(command==0){
			scanf("%d", &inputData);
			curr = head;
			while(curr->next!=NULL&&curr->next->d<inputData){
				curr = curr->next;
			}
			link temp = curr->next;
			curr->next= insert(inputData);
			curr->next->next = temp;

			//insert
		}
		else if(command==1){
			scanf("%d",&inputData);
			curr = head;
			delete(curr,inputData);
		}
		else if(command==2){
			curr =head->next;
			while(curr!=NULL){
				printf("%d ",curr->d);
				curr = curr->next;
			}
			printf("\n");
		}
	}
	return 0;
}
