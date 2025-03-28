#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* deleteAtEnd(Node* head){
	Node* temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
	return head;
}
