#include<stdio.h>
#include "functions.h"

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
			printf("the sorted array is:");
			for (int i=0;i<n;i++){
				printf("%d ",arr[i]);
			}
			break;
		case 4:
			selectionSort(arr,n);
			printf("the sorted array is:");
			for (int i=0;i<n;i++){
				printf("%d",arr[i]);
			}
			break;
		case 5:
			mergeSort(arr,n);
			printf("the sorted array is: ");
			for (int i=0;i<n;i++){
				printf("%d", arr[i]);
			}
			break;
		default:
			printf("Invalid Input");
	}
	//printf("Want to continue!! (1 for yes ,0 for no)");
	scanf("%d",&func);
	}
return 0;
}
