#include <stdlib.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
// sorting functions declaration 

void linearSearch(int arr[], int size, int item);
void binarySearch(int arr[],int size, int item);
void bubbleSort(int arr[],int size);
void selectionSort(int arr[],int size);
void mergeSort(int arr[],int size);
void insertionSort(int arr[], int size);
void quickSort(int arr[],int size);

// Node DataType for LinkedList

typedef struct createNode{
	int data;
	struct createNode* next;
} Node;

// LinkedList functions declarations

Node* insertAtBeginning(Node* head, int data);
Node* continuousInsert(Node* head);
Node* insertAtEnd(Node* head, int data);
Node* insertAtPosition(Node* head, int data,int pos);
Node* deleteAtBegin(Node* head);
Node* deleteAtEnd(Node* head);
Node* deleteAtPos(Node* head,int pos);
Node* freeList(Node* head);
void displayList(Node* head);
Node* getListLength(Node* head);
Node* reverseLinkedList(Node* head);

//Circular LinkedList Functions Declarations

Node* circularLinkedList(Node* last);
Node* circularInsertAtBeginning(Node* last);
void circularListDisplay(Node* last);
Node* circularInsertAtEnd(Node *last);
Node* circularInsertAtPos(Node* head);
Node* circularDeleteBegin(Node* last);
Node* circularDeleteEnd(Node* last);
Node* circularDeleteAtPos(Node * last);
Node* circularListReverse(Node* last);
void circularListLength(Node *last);
void isCircular(Node* last);
Node* circularListFree(Node * last);

//doubly LinkedList DataType 
typedef struct createDNode{
      int data;
      struct createDNode* prev;
      struct createDNode* next;
}DNode;

extern DNode* head, *tail;

//Doubly LinkedList Fucntions Declarations 

void doublyLinkedList();
void doublyInsertAtBeginning();
void doublyInsertAtEnd();
void doublyInsertAtPos();
void doublyDeleteAtBeginning();
void doublyDeleteAtEnd();
void doublyDeleteAtPos();
void doublyListReverse();
void doublyListLength();

// Stack functions declaration

int isEmpty();
int isFull();
void push(int x);
void pop();
void peek();
void display();

//Stack with LinkedList functions declaration
Node *llpush(int x);
Node *llpop();
Node *llpeek();
Node *lldisplay();
int isllEmpty();

#endif
