#include <iostream>
using namespace std;

void merge(int *arr, int startIndex, int endIndex) {
	int midIndex = (startIndex + endIndex)/2;
	int i = startIndex, j = midIndex + 1, k = 0;
	int mergedArr[endIndex - startIndex + 1];
	while (i <= midIndex && j <= endIndex) {
		if (arr[i] < arr[j]) {
			mergedArr[k++] = arr[i++];
		} else  {
			mergedArr[k++] = arr[j++];
		}
	}
	while (i <= midIndex) {
		mergedArr[k++] = arr[i++];
	}
	while (j <= endIndex) {
		mergedArr[k++] = arr[j++];
	}
	
	for (int i = startIndex; i <= endIndex; i++) {
		arr[i] = mergedArr[i - startIndex];
	}
}

void mergeSort(int *arr, int startIndex, int endIndex) {
	if (startIndex >= endIndex)
    {
        return;
    }
    int middleIndex = startIndex + (endIndex - startIndex)/2;
    mergeSort(arr, startIndex, middleIndex);
	mergeSort(arr, middleIndex + 1, endIndex);
	merge(arr, startIndex, endIndex);
}

int main() {
	// your code goes here
	int size = 10;
	int arr[] = {32, 45, 12, 11, 324, 34, 57, 87, 74, 35};
	
	mergeSort(arr, 0, size - 1);
	
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}