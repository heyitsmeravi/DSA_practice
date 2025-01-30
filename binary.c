#include<stdio.h>
void binarySearch(int arr[],int size, int item){
	int low=0;
	int high=size-1;
	while (low<=high){
		int mid=low+(high-low)/2;
		if (arr[mid]==item){
			printf("element found at %d",mid+1);
			return;
		}
		else if (arr[mid]<item){
			low=mid+1;
		}
		else{
			high=mid;
		}
	}
	return;
}
