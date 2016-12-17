#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
	struct Node* next;
	int value;
};
typedef struct Node node;



int main(){
	node *head =malloc(sizeof(node));
	node *curr;
	node *end;
	curr =end= head;
	int N,data;
	int query,value;
	scanf("%d",&N);
	for(int i=0; i<N;i++){
		scanf("%d",&query);
		if(query==0){
			scanf("%d",&data);
			node *newNode = malloc(sizeof(node));
			end->next=newNode;
			newNode->value=data;
			end = newNode;
		}else if(query==1){
			scanf("%d",&data);

			curr = head;
			while(curr->next!=NULL){
				if(curr->next->value==data){
					node *temp = curr->next;
					curr->next = curr->next->next;
					free(temp);
					break;
				}
				curr=curr->next;
			}
		}else if(query==2){
			curr = head->next;
			while(curr!=NULL){
				printf("%d ",curr->value);
				curr = curr->next;
			}
			printf("\n");
		}
	}
	


return 0;
}