#include <stdio.h>
#include <stdlib.h>
#define NULL 0

struct linked_list{
	int number;
	struct linked_list *next;
	
};
typedef struct linked_list node;

main(){
	node *head;
	void create(node *p);
	void print(node *p);
	head = (node*)malloc(sizeof(node));
	create(head);
	printf("\n");
	print(head);
}

void create(node *list){
	printf("Input a number \n");
	printf("(type -1 to end): \n");
	scanf("%d",&list->number);
	
	if (list->number == -1){
		list->next = NULL;
	}
	else{                                        //create next node.
		list->next = (node*)malloc(sizeof(node));
		create(list->next);
	}
	return;
}

void print(node *list){
	if(list->next != NULL){
		printf("%d, ",list->number);
	}else{
		printf("%d",list->number);
	}
	print(list->next);
	return;	
}
