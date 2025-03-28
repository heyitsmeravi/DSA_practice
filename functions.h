#include <stdlib.h>
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void linearSearch(int arr[], int size, int item);
void binarySearch(int arr[],int size, int item);
void bubbleSort(int arr[],int size);
void selectionSort(int arr[],int size);
void mergeSort(int arr[],int size);
void insertionSort(int arr[], int size);
void quickSort(int arr[],int size);

typedef struct createNode{
	int data;
	struct createNode* next;
} Node;
Node* insertAtBeginning(Node* head, int data);
Node* continuousInsert(Node* head);
Node* insertAtEnd(Node* head, int data);
Node* insertAtPosition(Node* head, int data,int pos);
Node* freeList(Node* head);
void displayList(Node* head);
#endif
