int partition(int arr[], int lb, int ub){
	int i,j,key=arr[lb],temp;
	i=lb+1;
	j=ub;
	while (i<=j){
		while(i<=ub && arr[i]<=key){
			i++;
		}
		while (arr[j]>key){
			j--;
		}
		if (i<j){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	temp=arr[j];
	arr[j]=arr[lb];
	arr[lb]=temp;
	return j;
}
void quickcall(int arr[],int lb, int ub){
        if (lb<ub){
		int key=partition(arr,lb,ub);
		quickcall(arr,lb,key-1);
		quickcall(arr,key+1,ub);
	}
 }
void quickSort(int arr[], int size){
	quickcall(arr,0,size-1);
}


