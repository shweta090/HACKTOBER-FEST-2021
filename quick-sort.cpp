// Quick Sort

// Includes
#include <bits/stdc++.h>

// Function prototypes
int partition(int arr[], int low, int high);
void sort(int arr[], int low, int high);
void swap(int *a, int *b);
void printArr(int arr[], int arrSize);

// Main function
int main() {
	int arr[] = {70,20,10,1,3};
	int arrSize = sizeof(arr)/sizeof(arr[0]);
	sort(arr, 0, arrSize);
	printArr(arr, arrSize);
	return 0;
}

// swapping function
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// printing function
void printArr(int arr[], int arrSize) {
	int i=0;
	for(i=0;i<arrSize;i++) {
		std::cout << arr[i] << " ";
	}
}

// partitioning and pivot's sorted index position finding function
int partition(int arr[], int low, int high) {
	int pivot = arr[high-1];
	int i=low, j=low, a=low;
	for(a=low;a<high-1;a++) {
		if(arr[j] < pivot) {
			swap(&arr[i], &arr[j]);
			i++;
		}
		j++;
	}
	swap(&arr[i], &arr[high-1]);
	return i;
}

// Main sorting function
void sort(int arr[], int low, int high) {
	if(low < high) {
		int index = partition(arr, low, high);
		sort(arr, low, index);
		sort(arr, index+1, high);
	}
}