#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
	char data;
	struct Node* lower;
};
typedef struct Node node;

int main(){
	char c;
	node *bottom = malloc(sizeof(node));
	node *top;
	top = bottom;

	while((c=getchar())!=EOF){
		if(c=='\n') break;

		if(c=='('||c=='{'||c=='['){
			node *newNode = malloc(sizeof(node));
			newNode->lower = top;
			newNode->data=c;
			top = newNode;
		}else{
			if(top==bottom){
				printf("INVALID\n");
				return 0;
			} 
			else if(c==')'){
				if(top->data!='('){
				printf("INVALID\n");
				return 0;
				}
			}else if(c=='}'){
				if(top->data!='{'){
				printf("INVALID\n");
				return 0; 
				}
			}else if(c==']'){
				if(top->data!='['){
				printf("INVALID\n");
				return 0;
				}
			} 
			node *temp = top;
			top = top->lower;
			free(temp);
		}
	}
printf("VALID\n");

return 0;
}