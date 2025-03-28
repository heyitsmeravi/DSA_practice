#include<stdio.h>
void printArray(int arr[],int *size){
	for (int i=0;i<(*size);i++){
			printf("%d ",arr[i]);
		}
}
void inputArray(int arr[],int *size){
	for (int i=0;i<(*size);i++){
		scanf("%d",&arr[i]);
	}
}
void insertAtBeginning(int arr[], int* size)
{
	int data;
	printf("Enter the entry to insert at the beginning\n");
	scanf("%d",&data);
	(*size)++;
	for (int i=(*size)-1;i>=1;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=data;
}
void insertAtEnd(int arr[],int* size){
	(*size)++;	
	int data;
	printf("enter the entry to insert at the end");
	scanf("%d",&data);
	arr[(*size)-1]=data;
}
void insertAtSpecifiedPos(int arr[],int* size){
	int data,pos;
	printf("enter the position at which you want to insert the entry:");
	scanf("%d",&pos);
	if (pos<0 || pos>*size){
		printf("invalid position\n");
		return;
	}
	else{
	printf("\nenter the entry : ");
	scanf("%d",&data);
	for (int i=(*size);i>pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=data;
	(*size)++;
	}
}
void deleteAtBeginning(int arr[],int* size){
	for (int i=0;i<*size-1;i++){
		arr[i]=arr[i+1];
	}
	(*size)--;
}
void deleteAtEnd(int arr[],int* size){
	(*size)--;
}
void deleteAtSpecifiedPos(int arr[],int* size){
	int pos;
	printf("enter the position of which entry is to be deleted");
	scanf("%d",&pos);
	if (pos<0 || pos>=(*size)){
		printf("invalid position\n");
		}
	else{
	for(int i=pos;i<*size-1;i++){
		arr[i]=arr[i+1];
	}
	(*size)--;
	}
}
int main()
{
	int size;
	printf("enter the size of the array: ");
	scanf("%d",&size);
	int arr[size];
	printf("\nEnter the element of array\n");
	inputArray(arr,&size);
	int exitFlag=1;
	while(exitFlag){
	int choice;
	printf("Enter 1 to show the array\n");
	printf("Enter 2 to insert any entry to the beginning\n");
	printf("Enter 3 to insert any entry to the end\n");
	printf("Enter 4 to insert at any specified position\n");
	printf("Enter 5 to delete the first element\n");
	printf("Enter 6 to delete the last element\n");
	printf("Enter 7 to delete at any specified position\n");
	scanf("%d",&choice);
		switch(choice){
		case 1:
			printArray(arr,&size);
			break;
		case 2:
			insertAtBeginning(arr,&size);
			break;
		case 3:
			insertAtEnd(arr,&size);
			break;
		case 4:
			insertAtSpecifiedPos(arr,&size);
			break;
		case 5:
			deleteAtBeginning(arr,&size);
			break;
		case 6:
			deleteAtEnd(arr,&size);
			break;
		case 7:
			deleteAtSpecifiedPos(arr,&size);
			break;
		default:
		printf("invalid entry");
	}
	printf("do you wanna exit enter 0 if not enter 1: ");
	scanf("%d",&exitFlag);
	printf("\n");
}				
	return 0;
}
