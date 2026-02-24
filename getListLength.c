#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* getListLength(Node* head){
	Node* temp=head;
	int counter=0;
	while(temp!=NULL){
		counter++;
		temp=temp->next;
	}
	printf("the List Length is %d\n",counter);
}

