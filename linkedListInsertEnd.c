#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* insertAtEnd(Node* head,int data){
	Node * newNode, *temp;
	newNode=(Node* )malloc(sizeof(Node));
	newNode->data=data;
	newNode->next=NULL;
	temp=head;
	while(temp->next!=NULL){
			temp=temp->next;

	}
	temp->next=newNode;
	return head;
}

