#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* insertAtPosition(Node* head, int data,int pos){
	Node* newNode,*temp;
	newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;
	newNode->next=NULL;
	temp=head;
	int counter=1;
	while(counter!=pos-1){
		counter=counter+1;
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	return head;
}

