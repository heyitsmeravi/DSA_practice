#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node * deleteAtBegin(Node* head){
	if (head==NULL){
		printf("the list is Empty!\n");
	}else{
		Node* temp;
		temp=head;
		head=head->next;
		free(temp);
	}
	return head;
}

