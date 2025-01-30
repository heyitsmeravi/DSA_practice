#include<stdio.h>

void linearSearch(int arr[],int size, int item){
	for (int i=0;i<size;i++){
		if (arr[i]==item){
			printf("\nThe element is found at %d",i+1);
			return;
		}
	}
	printf("\nElement not found in the given array");
}

