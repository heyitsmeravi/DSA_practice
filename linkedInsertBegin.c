#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
struct Node* head= NULL;
void insertAtBeginning(int value){
	struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data =value;
	newNode->next =head;
	head=newNode;
}
void insertAtEnd(int value){
	struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=NULL;

	if (head ==NULL){
		head = newNode;
		return;
	}
	struct Node* temp =head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next= newNode;
}
void displayList() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
	insertAtBeginning(10);
	insertAtEnd('a');
	insertAtBeginning(30);
	displayList();
	return 0;
}

