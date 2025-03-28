#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* deleteAtPos(Node* head,int pos){
	Node*temp=head;
	int counter=1;
	while(counter<pos-1){
		temp=temp->next;
		counter+=1;
	}
	Node* nextNode=temp->next;
	temp->next=temp->next->next;
	free(nextNode);
	return head;
}

