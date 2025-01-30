#include<stdio.h>

void selectionSort(int arr[],int size){
	for (int j=0;j<size-1;j++){
		int min=j;
        	for (int i=j+1;i<size;i++){
                	if (arr[i]<arr[min]){
                        	min=i;
                	}			
		}
		int temp=arr[min];
		arr[min]=arr[j];
		arr[j]=temp;
	}
}

