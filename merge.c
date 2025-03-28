void merge_sorted(int arr[],int l, int m, int r){
	int left=m-l+1;
	int right= r-m;
	int temp_left[left];
	int temp_right[right];
	for (int i=0; i<left;i++){
		temp_left[i]=arr[l+i];
	}
	for (int i=0;i<right;i++){
		temp_right[i]=arr[m+1+i];
	}
	int i,j,k;
	i=0,j=0,k=l;
	while((i<left) && (j<right)){
		if (temp_left[i]<=temp_right[j]){
			arr[k]=temp_left[i];
			i++;
		}
		else{
			arr[k]=temp_right[j];
			j++;
		}
		k++;
	}
	while(i<left){
		arr[k]=temp_left[i];
		i++;
		k++;
	}
	while(j<right){
		arr[k]=temp_right[j];
		j++;
		k++;
	}
}
void merge_recursion(int arr[],int l, int r){
        if (l<r){
        int m= l+ (r-l)/2;
        merge_recursion(arr,l,m);
        merge_recursion(arr,m+1,r);
        merge_sorted(arr,l,m,r);
        }
}
void mergeSort(int arr[],int size){
        merge_recursion(arr,0,size-1);
}
