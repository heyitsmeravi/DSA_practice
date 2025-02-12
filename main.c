#include<stdio.h>
#include "functions.h"
void print(int arr[],int size){
	printf("the sorted array is: ");
                        for (int i=0;i<size;i++){
                                printf("%d ", arr[i]);
                        }
}
int main(){
	int k,n;
	//printf("enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	//printf("Enter the elements of array:");
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int func=1;
	while(func){	
	int choice;
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
			//printf("enter the element to search:");
        		scanf("%d",&k);
			linearSearch(arr,n,k);
			break;
		case 2:
			//printf("enter the element to search:");
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
return 0;
}
