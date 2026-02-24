#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
//typedef struct createDNode{
//	int data;
//	struct createDNode* prev;
//	struct createDNode* next;
//}DNode;
//extern DNode *head, *tail;
DNode* head=NULL, *tail=NULL;
void doublyLinkedList(){
	DNode *newNode;
	int exit;
	do {
	newNode=(DNode*)malloc(sizeof(DNode));
	printf("Enter the data: \n");
	scanf("%d",&newNode->data);
	newNode->prev=NULL;
	newNode->next=NULL;
	if (head==NULL){
		tail=head=newNode;
	}else{
		tail->next=newNode;
		newNode->prev=tail;
		tail=newNode;
	}
	printf("wanna continue!! 1 for yes , 0 for exit\n");
	scanf("%d",&exit);
	}while(exit);
}
void doublyInsertAtBeginning(){
	DNode* newNode;
	newNode=(DNode *)malloc(sizeof(DNode));
	printf("enter the data: \n");
	scanf("%d",&newNode->data);
	newNode->prev=NULL;
	head->prev=newNode;
	newNode->next=head;
	head=newNode;
}
void doublyInsertAtEnd(){
	DNode* newNode;
	newNode=(DNode* )malloc(sizeof(DNode));
	newNode->next=NULL;
	printf("enter the data:\n");
	scanf("%d",&newNode->data);
	newNode->prev=tail;
	tail->next=newNode;
	tail=newNode;
}
void doublyInsertAtPos(){
	 int pos,counter=1;
	 printf("Enter the position: ");
	 scanf("%d",&pos);
	 DNode* newNode,*temp=head;
	 newNode=(DNode*)malloc(sizeof(DNode));
	 printf("enter the data: ");
	 scanf("%d",&newNode->data);
	 while(counter!=pos-1) {
		temp=temp->next;
		counter++;
	 }
	 newNode->next=temp->next;
	 temp->next->prev=newNode;
	 newNode->prev=temp;
	 temp->next=newNode;
}
void doublyDeleteAtBeginning(){
	DNode*temp=head;
	head=head->next;
	free(temp);
}
void doublyDeleteAtEnd(){
	DNode*temp=tail;
	temp->prev->next=NULL;
	tail=tail->prev;
	free(temp);
}
void doublyDeleteAtPos(){
	DNode*temp=head;
	int counter=1,pos;
	printf("Enter the Position:\n");
	scanf("%d",&pos);
	while(counter!=pos-1){
		temp=temp->next;
		counter++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	free(temp);
}
void doublyListLength(){
	DNode*temp=head;
	int length=0;
	while(temp!=NULL){
		temp=temp->next;
		length++;
	}
	printf("The length of Doubly Linked List is %d\n",length);
}
void doublyListReverse(){
	DNode *currNode,*nextNode;
	currNode=head;
	while(currNode!=NULL){
		nextNode=currNode->next;	
		currNode->next=currNode->prev;
		currNode->prev=nextNode;
		currNode=nextNode;
	}
	head=tail;
	tail=currNode;
	printf("The doublyList is reversed now!!\n");
}

	
//int main(){
//	doublyLinkedList();
//	doublyInsertAtEnd();
//	Node* temp=head;
//	while(temp!=NULL){
//		printf("%d -> ",temp->data);
//		temp=temp->next;
//	}
//	printf("NULL\n");
//	return 0;
//}
