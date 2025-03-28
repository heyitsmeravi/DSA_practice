#include<stdio.h>
#include "functions.h"
void print(int arr[],int size){
	printf("the sorted array is: ");
	for (int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}
Node* head=NULL;

int main(){
	int dataType;
	printf("Data Structures Menu:\n");
	printf("1. Array\n");
	printf("2. Linked List\n");
	printf("3. Stack\n");
	printf("4. Queue\n");
	printf("5. Tree \n");
	scanf("%d",&dataType);
	switch(dataType){
		case 1:	{
				int k,n;
				printf("enter the size of the array:");
				scanf("%d",&n);
				int arr[n];
				printf("Enter the elements of array:");
				for (int i=0;i<n;i++){
					scanf("%d",&arr[i]);
				}
				int func=1;
				while(func){	
					int choice;
					printf("Array Selected\n");
					printf("choose among the following options:\n");
					printf("1 for linear search\n");
					printf("2 for binary search\n");
					printf("3 for Bubble sort\n");
					printf("4 for selection sort\n");
					printf("5 for merge sort\n");
					printf("6 for insertion sort\n");
					printf("7 for quick sort\n");
					printf("8 for viewing the array\n");
					scanf("%d",&choice);
					switch(choice){
						case 1:
							printf("enter the element to search:");
							scanf("%d",&k);
							linearSearch(arr,n,k);
							break;
						case 2:
							printf("enter the element to search:");
							scanf("%d",&k);
							binarySearch(arr,n,k);
							break;
						case 3: 
							bubbleSort(arr,n);
							break;
						case 4:
							selectionSort(arr,n);
							break;
						case 5:
							mergeSort(arr,n);
							break;
						case 6:
							insertionSort(arr,n);
							break;
						case 7:
							quickSort(arr,n);
							break;
						case 8:
							print(arr,n);
							break;
						default:
							printf("Invalid Input");
					}
					printf("\nWant to continue!! (1 for yes ,0 for no)");
					scanf("%d",&func);
				}
				break;
			}
		case 2:{
			       int func=1;
			       while (func){
				       int choice;
				       printf("Linked List Selected\n");
				       printf("1. create List\n");
				       printf("2. Insert at Beginning\n");
				       printf("3. Insert at End\n");
				       printf("4. Insert at specified position\n");
				       printf("5. Delete from Beginning\n");
				       printf("6. Delete from End\n");
				       printf("7. Delete from Specified Position\n");
				       printf("8. Display List\n");
				       printf("9. Free List\n");
				       scanf("%d",&choice);
				       switch(choice){
					       case 1:{
							      head=continuousInsert(head);
							      break;
						      }
					       case 2: {
							       int data;
							       printf("enter data :");
							       scanf("%d",&data);
							       head=insertAtBeginning(head,data);
							       break;
						       }
					       case 3: {
						       		int data;
								printf("enter data: ");
								scanf("%d",&data);
								head=insertAtEnd(head,data);
								break;
					       } 
					       case 4: {
						       int data, pos;
						       printf("Enter the Position");
						       scanf("%d",&pos);
						       printf("Enter the Data: ");
						       scanf("%d",&data);
						       head=insertAtPosition(head,data,pos);
						       break;
					       }
					       case 5: {
							head=deleteAtBegin(head);
							break;
					       }
					       case 6: {
							head=deleteAtEnd(head);
							break;
						}
					       case 7:{
							int pos;
							printf("Enter the Position: ");
							scanf("%d",&pos);
							head=deleteAtPos(head,pos);
							break;
						}
					       case 8:{
							      displayList(head);
							      break;
						      }
						case 9: {
							head=freeList(head);
							printf("List free successfully!");
							break;
						}
						default:
						{
							printf("Invalid Choice");
						}
				       }
				       printf("continue with LinkedList! 0 for No 1 for yes: ");
				       scanf("%d",&func);
			       }
			       break;
		       }
		default:
		       printf("Invalid Choices");

	}
	return 0;
}
