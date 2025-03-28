#include<stdio.h>
void bubbleSort(int arr[],int num,int pass){
	int i,j,temp;
	for ( i=0;i<pass;i++){
		for ( j=0;j<num-i-1;j++){
			if (arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		for (int k=0;k<num;k++){
			printf("%d ",arr[k]);
			}
			printf("\n");
	}
}
int main(){
	int num;
	scanf("%d",&num);
	int arr[num];
	for (int i=0;i<num;i++){
		scanf("%d",&arr[i]);
	}
	int pass;
	scanf("%d",&pass);
	bubbleSort(arr,num,pass);
	for (int i=0;i<num;i++){
		printf("%d ",arr[i]);
	}


	return 0;
}

