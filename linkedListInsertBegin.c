#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
//typedef struct createNode{
//	int data;
//	struct createNode* next;
//} Node;
Node* insertAtBeginning(Node* head, int data){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->data=data;
	newNode->next=head;
	return newNode;
}
Node* continuousInsert(Node* head){
	int data,exit;
	Node* temp=head;
	Node* newNode;
	do {	
		newNode= (Node*)malloc(sizeof(Node));
		printf("enter data ");
		scanf("%d",&newNode->data);
		newNode->next=NULL;
		if (head==NULL){
			head=temp=newNode;
			}else{
				temp->next=newNode;
				temp=newNode;
				}
				printf("wanna continue! 1 for yes 0 for no: ");
				scanf("%d",&exit);
	}while(exit);
	return head;
}
void displayList(Node* head) {
                                  if (head == NULL) {
                                          printf("List is empty\n");
                                          return;
                                  }
 
                                  Node* temp = head;
                                  while (temp != NULL) {
                                          printf("%d -> ", temp->data);
                                          temp = temp->next;
                                  }
                                  printf("NULL\n");                          }
