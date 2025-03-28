#include <stdio.h>
#include <stdlib.h>

struct createNode{
	int data;
	struct createNode *link;
};
void freeList(struct createNode* head) {
	struct createNode* temp;
	while (head != NULL) {
		temp = head;
		head = head->link;
		free(temp);
	}
}
struct createNode* insertAtBeginning(struct createNode* head,int data){
	struct createNode* newNode=(struct createNode *)malloc(sizeof(struct createNode));
	newNode->data=data;
	newNode->link=head;
	return newNode;
}

int main(){
	struct createNode *head, *newNode,*temp;
	head=0;
	int choice=1,option,exit=1,data;
		while(exit){
		printf("LinkedList Menu\n");
		printf("1 for Insert at Beginning");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("enter data: ");
				scanf("%d",&data);
				head=insertAtBeginning(head,data);
				break;
			default:
				printf("Invalid choice\n");
		}
		while(choice){
			newNode=(struct createNode *)malloc(sizeof(struct createNode));
			printf("enter data");
			scanf("%d",&newNode->data);
			newNode->link=0;
			if (head==0){
				head=temp=newNode;
			}else{
				temp->link=newNode;
				temp=newNode;
			}
			printf("Wanna contniue! 1 for yes 0 for no :");
			scanf("%d",&choice);
			printf("\n");
		}
		temp=head;
		while(temp!=0){
			printf("%d ", temp->data);
			temp=temp->link;
		}
		freeList(head);
		printf("list has been freed successfully\n");
	
	printf("do you want to exit");
	scanf("%d",&exit);
}
	return 0;
}
