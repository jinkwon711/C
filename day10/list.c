#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

typedef char DATA;
struct linked_list{
	DATA d;
	struct linked_list *next;
};

typedef struct linked_list ELEMENT;
typedef ELEMENT* LINK;

void print(LINK head){
	while(head->next!=NULL){
		printf("%c",head->d);
		head= head->next;
	}
	printf("%c",head->d);
	printf("\n");
}
LINK insert(DATA d, LINK tail)
{
	assert(tail!=NULL);
	LINK p = malloc(sizeof(ELEMENT));
	p->d = d;
	p->next = NULL;
	return p;
}


int main(){


	char buf[]="this is a test";
	int i=0;
	LINK head, tail;
	head = malloc(sizeof(ELEMENT));
	tail = head;
	for(;buf[i]!='\0';++i){
		LINK newNode = insert(buf[i],tail);
		tail->next = newNode;
		tail = newNode;
	}

	print(head);
	return 0;
}

