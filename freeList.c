#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* freeList(Node* head){
	Node* temp;
	while (head!=NULL){
		temp=head;
		head=head->next;
		free(temp);
	}
return NULL;
}


