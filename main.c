#include<stdio.h>
#include "functions.h"
void print(int arr[],int size){
	printf("the sorted array is: ");
	for (int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}
//DNode* head=NULL, *tail=NULL;
int main(){
	int dataType;
	printf("Data Structures Menu:\n");
	printf("1. Array\n");
	printf("2. Linked List\n");
	printf("3. Circular Linked List\n");
	printf("4. Doubly Linked List\n");
	printf("5. Circular Doubly Linked List\n");
	printf("6. Stack\n");
	printf("7. Queue\n");
	printf("8. Tree \n");
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
			       Node* head=NULL;
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
				       printf("10. get List Length\n");
				       printf("11. Reverse List\n");
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
					       case 10:{
							       getListLength(head);
							       break;
						       }
					       case 11: {
								head=reverseLinkedList(head);
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
		       
		case 3:{
			int func;
			Node* last=NULL;
			do {
				printf("Circular Linked List Selected\n");
				printf("1. Create circular Linked List\n");
				printf("2. Insert at Beginning\n");
				printf("3. Insert at End\n");
				printf("4. Insert at specific Position\n");
				printf("5. Delete from Beginning\n");
				printf("6. Delete from End\n");
				printf("7. Delete from specific position\n");
				printf("8. Reverse list\n");
				printf("9. List Length\n");
				printf("10. Display list\n");
				printf("11. Free list\n");
				printf("12. isCircular?\n");
				int choice;
				scanf("%d",&choice);
				switch(choice){
					case 1: {
						last=circularLinkedList(last);
						break;
					}
					case 2: {
						last=circularInsertAtBeginning(last);
						break;
					}
					case 3: {
						last=circularInsertAtEnd(last);
						break;
					}
					case 4:{
						last=circularInsertAtPos(last);
						break;
					}
					case 5: {
						last=circularDeleteBegin(last);
						break;
					}
					case 6: {
						last=circularDeleteEnd(last);
						break;
					}
					case 7: {
						last=circularDeleteAtPos(last);
						break;
					}
				
					case 8: {
						last=circularListReverse(last);
						break;
					}
					case 9: {
						circularListLength(last);
						break;
					} 
					case 10: {
						circularListDisplay(last);
						break;
					}
					case 11: {
						last=circularListFree(last);
						break;
					}
					case 12: {
						isCircular(last);
						break;
					}
					default:{
						printf("Invalid Case\n");
					}
				}
				printf("wanna continue with circular Linked List ! 1  for yes, 0 for No\n");
				scanf("%d",&func);

			}while(func);
			break;
		}
		
		case 4:{
			       int func;
			       //DNode* head=NULL, *tail=NULL;
			       do {
				       printf("Doubly Linked List Selected\n");
				       printf("1. Create doubly Linked List\n");
				       printf("2. Insert at Beginning\n");
				       printf("3. Insert at End\n");
				       printf("4. Insert at specified Position\n");
				       printf("5. Deletion from Beginning\n");
				       printf("6. Deletion from the end\n");
				       printf("7. Deletion from the specified Position\n");
				       printf("8. Reverse the List\n");
				       printf("9. List Length\n");
				       printf("10. Display list\n");
				       printf("11. Free List\n");
				       int choice;
				       scanf("%d",&choice);
				       switch(choice){
					       case 1: {
						       doublyLinkedList();
						       break;
						       }
						case 2: {
							doublyInsertAtBeginning();
							break;
						}
						case 3: {
							doublyInsertAtEnd();
							break;
						}
						case 4: {
							doublyInsertAtPos();
							break;
						}
						case 5: {
							doublyDeleteAtBeginning();
							break;
						}
						case 6: {
							doublyDeleteAtEnd();
							break;
						}
						case 7: {
							doublyDeleteAtPos();
							break;
						}
						case 8: {
							doublyListReverse();
							break;
						}
						case 9:{
							doublyListLength();
							break;
						}
						case 10: {
							DNode* temp=head;
							while(temp!=NULL){
								printf("%d -> ", temp->data);
								temp=temp->next;
								}
							printf("NULL\n");
							break;
						}
						default:{
							printf("Invalid Case\n");
						}
				       }

					printf("Continue with doubly Linked List! 1  for yes, 0 for No\n");
					scanf("%d",&func);
			       }while(func);
			       break;
		}
		/*
		case 5: {

			break;
			}
		*/
		case 6:{
			int sch;
			printf("Stack Selected!!\n");
			printf("1. Static Stack\n");
			printf("2. Dynamic Stack\n");
			scanf("%d",&sch);
			switch(sch){
				case 1:{
					int ch;
		        		do{
					printf("Static Stack Selected\n");
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
					break;
				}
				case 2: {
					int ch;
                                        do{
					printf("Dynamic Stack Selected\n");
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
                                                llpush(x);
                                                break;
                                        case 2:
                                                llpop();
                                                break;
                                        case 3:
                                                llpeek();
                                                break;
                                        case 4:
                                                lldisplay();
                                                break;
                                        case 5:
                                                ch=0;
                                                break;
                                        default:
                                                printf("Invalid Case!!\n");
                                        	}
                                        }
                                        while(ch!=0);
					break;
				}
				default :{
					printf("Invalid Case\n");
				}
			}
		break;
		}
		//case 7:
		default:
		       printf("Invalid Choices");

	}
	return 0;
}
