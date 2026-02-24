#include<stdio.h>
#include<stdlib.h>
#include "functions.h"
Node* lltop=NULL;
int isllEmpty(){
	if (lltop==NULL){
		return 1;
	}else{
		return 0;
	}
}
Node* llpush(int x){
	Node *newNode;
	newNode=(Node*)malloc(sizeof(Node));
	newNode->data=x;
	newNode->next=lltop;
	lltop=newNode;
}
Node* llpop(){
	if (isllEmpty()){
		printf("The Stack is Empty!!\n");
	}else{
		Node*temp=lltop;
		printf("poped %d\n",lltop->data);
		lltop=lltop->next;
		free(temp);
	}
}
Node* lldisplay(){
	Node*temp=lltop;
	while(temp!=NULL){
		printf("| %d |\n",temp->data);
		temp=temp->next;
	}
	printf("------\n");
}
Node* llpeek(){
	Node*temp=lltop;
	printf("Top Element is %d\n",temp->data);
}
/*
int main(){
	int ch;
	do{
		printf("enter the choice: \n"
				"1 for push  \n"
				"2 for pop  \n"
				"3 for peek  \n"
				"4 for display \n"
				"5 for exit\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				int x;
				printf("Enter the data to push: " );
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				ch=0;
				break;
			default:
				printf("Invalid Case!!\n");
		}
	}
	while(ch!=0);

	return 0;
} */

