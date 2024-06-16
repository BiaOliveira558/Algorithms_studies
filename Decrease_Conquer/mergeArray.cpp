#include <iostream>
using namespace std;

void merge(int *firstArr, int *secondArr, int sizeFirst, int sizeSecond, int *mergedArr) {
    int i = 0, j = 0, k = 0;
    
    while (i < sizeFirst && j < sizeSecond) {
        if (firstArr[i] <= secondArr[j]) {
            mergedArr[k++] = firstArr[i++];
        } else {
            mergedArr[k++] = secondArr[j++];
        }
    }
    
    while (i < sizeFirst) {
        mergedArr[k++] = firstArr[i++];
    }
    
    while (j < sizeSecond) {
        mergedArr[k++] = secondArr[j++];
    }
    
}

int main() {
	// your code goes here
	int sizeFirst = 5, sizeSecond = 5;
	int firstArr[] = {1, 5, 6, 7, 10};
	int secondArr[] = {2, 4, 8, 11, 12};
	int mergedArr[sizeFirst + sizeSecond];

	merge(firstArr, secondArr, sizeFirst, sizeSecond, mergedArr);
	
	for (int i = 0; i < sizeFirst + sizeSecond; i++) {
		cout << mergedArr[i] << " ";
	}

	return 0;
}