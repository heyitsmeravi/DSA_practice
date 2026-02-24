#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* circularLinkedList(Node* last){
	Node *newNode;
	int exit=1;
	while(exit){
		newNode=(Node*)malloc(sizeof(Node));
		printf("enter data ");
		scanf("%d",&newNode->data);
		newNode->next=newNode;
		if (last==NULL){
			last=newNode;
		}
		else{
			newNode->next=last->next;
			last->next=newNode;
			//newNode->next=temp;
			last=newNode;
		}
		printf("\nwanna continue!! 1 for yes, 0 for No: ");
		scanf("%d",&exit);
	}
	return last;
}
Node* circularInsertAtBeginning(Node* last){
	Node*newNode,*temp;
	newNode=(Node*)malloc(sizeof(Node));
	printf("Enter the data: ");
	scanf("%d",&newNode->data);
	newNode->next=last->next;
	last->next=newNode;
	return last;
}
void circularListDisplay(Node* last){
	Node*temp=last->next;
	do{
		printf("%d -> ",temp->data);
		temp=temp->next;
	}while(last->next!=temp);
}
Node* circularInsertAtEnd(Node *last){
	Node*newNode;
	newNode=(Node *)malloc(sizeof(Node));
	printf("Enter data ");
	scanf("%d",&newNode->data);
	newNode->next=last->next;
	last->next=newNode;
	last=newNode;
	return last;
}
Node* circularInsertAtPos(Node *last){
	int counter=1,position;
	printf("Enter the position: ");
	scanf("%d",&position);
	Node* temp, *newNode;
	temp=last->next;
	while(counter<position-1){
		temp=temp->next;
		counter+=1;
	}
	newNode=(Node*)malloc(sizeof(Node));
	printf("Enter data: ");
	scanf("%d",&newNode->data);
	newNode->next=temp->next;
	temp->next=newNode;
	return last;
}
Node* circularDeleteBegin(Node*last){
	Node*temp=last->next;
	last->next=temp->next;
	free(temp);
	return last;
}
Node* circularDeleteEnd(Node* last){
	Node*temp=last->next;
	while(temp->next!=last){
		temp=temp->next;
	}
	temp->next=last->next;
	free(last);
	last=temp;
	return last;
}
Node* circularDeleteAtPos(Node* last){
	Node*temp=last->next;
	int counter=1,position;
	printf("Enter the position: ");
	scanf("%d",&position);
	while(counter<position-1){
		counter++;
		temp=temp->next;
	}
	Node*del=temp->next;
	temp->next=temp->next->next;
	free(del);
	return last;
}

Node* circularListReverse(Node*last){
	Node* curr, *nxt, *prv;
	curr=last->next,nxt=curr->next;
	while(curr!=last){
		prv=curr;
		curr=nxt;
		nxt=curr->next;
		curr->next=prv;
	}
	nxt->next=last;
	last=nxt;
	return last;
}
void circularListLength(Node* last){
	int length=0;
	Node*temp=last;
	do{
		temp=temp->next;
		length++;
	}while(temp!=last);
	printf("the length of the circularList is %d\n",length);
}
void isCircular(Node* last){
	Node*temp=last->next;
	int number;
	printf("enter the numbers of iterations: ");
	scanf("%d",&number);
	for (int i =0;i<number;i++){
		printf("%d ->", temp->data);
		temp=temp->next;
	}
}
Node* circularListFree(Node *last){
	Node*temp=last->next;
	Node*head=temp;
	Node*nextNode;
	do {
		nextNode=temp->next;
		printf("freeing the node with %d \n",temp->data);
		free(temp);
		temp=nextNode;
	}while(temp!=head);
	return NULL;
}

/*
int main(){
	Node* head=NULL;
	head=circularLinkedList(head);
	Node*temp=head;
	while(temp->next!=head){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);

	return 0;
}
*/


