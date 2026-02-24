#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* reverseLinkedList(Node* head){
	Node *prevNode=NULL, *currNode=head,*nextNode=head;
	while (nextNode!=NULL){
		nextNode=nextNode->next;
		currNode->next=prevNode;
		prevNode=currNode;
		currNode=nextNode;
	}
	head=prevNode;
	return head;
}
//int main(){
//	Node* head=NULL;
//	head=continuousInsert(head);
//	displayList(head);
//	head=reverseLinkedList(head);
//	displayList(head);
//	return 0;
//}
