void bubbleSort(int *arr, int size){
	int flag;
	for(int i = 0; i < size; ++i){
		flag = 1;
		for(int j = 0; j < size - 1; ++j){
			if(arr[j] > arr[j + 1]){
				swap(arr + j, arr + j + 1);
				flag = 0;
			}
		}
		if(flag){
			break;
		}
	}
}

void insertionSort(int *arr, int size){
	int temp;
	int i;
	int j;
	for(i = 1; i < size; ++i){
		temp = arr[i];
		for(j = i - 1; j >= 0 && temp <= arr[j]; j--){
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}
}

void selectionSort(int *arr, int size){
	int minIndex = 0;
	for(int i = 0; i < size; i++){
		minIndex = i;
		for(int j = i + 1; j < size; ++j){
			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}
		}
		if(minIndex != i)
			swap(arr + minIndex, arr + i);
	}
}