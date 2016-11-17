#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[100001];


typedef char parenthese;

struct stack{
	parenthese d;
	struct stack *next;
};
typedef struct stack node;
typedef node* link;

void push(){

}
// link pop(link *top){
// 	link *temp = *top;
// 	top= top->next;
// 	return &temp;
// }
	
int main(){
	link bottom, top, curr;
	top = bottom = curr = NULL;
	// for(int i=0; i!=100001;i++){
	// 	input='0';
	// }

	// scanf("%s",s);

	// for(int i=0; input!='0';i++){
	char input;
	while((input=getchar())!='\n'&& input!=EOF){
		if(input=='['||input=='('||input=='{'){
			link temp = malloc(sizeof(node));
			temp->d = input;
			temp->next = top;
			top = temp;
			// printf("inside\n");

		}
		else{
			// printf("%s%c\n","input",input);
			link temp2 = top;
			if(top==NULL){
				printf("INVALID\n");
				return 0;
			}
			top= top->next;
			// link temp2 = pop(&top);
			// printf("%s%c\n","popped",temp2->d);
			if(temp2->d=='['){
				if(input==']') free(temp2);
				else{
					printf("INVALID\n");
				return 0;
				}
			}
			else if(temp2->d=='{'){
				if(input=='}') free(temp2);
				else{
					printf("INVALID\n");
				return 0;
				}
			}
			else if(temp2->d=='('){
				if(input==')') free(temp2);
				else{
					printf("INVALID\n");
				return 0;
				}
			}


		}
	}
	if(top!=NULL){
		printf("INVALID\n");
	}
	else{
		printf("VALID\n");
	}



	return 0;
}