#include <iostream>
using namespace std;

int binarySearch (int *arr, int startIndex, int endIndex, int requiredNumber){
    if (startIndex <= endIndex)
    {
        int middleIndex = startIndex + (endIndex - startIndex)/2;
        if (arr[middleIndex] == requiredNumber){
            return middleIndex;
        }else if (arr[middleIndex] > requiredNumber)
        {
            return binarySearch(arr,startIndex, middleIndex - 1,requiredNumber);
        }
        else if (arr[middleIndex] < requiredNumber)
        {
            return binarySearch(arr, middleIndex + 1,endIndex,requiredNumber);
        }
    }
    
    return -1;
}

int main() {
	// your code goes here
	int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    cout << binarySearch(arr, 0, 24, 2) << endl;
	cout << binarySearch(arr, 0, 24, 11) << endl;
	cout << binarySearch(arr, 0, 24, 17) << endl;
	cout << binarySearch(arr, 0, 24, 37) << endl;
	cout << binarySearch(arr, 0, 24, 41) << endl;
	cout << binarySearch(arr, 0, 24, 79) << endl;
	cout << binarySearch(arr, 0, 24, 97) << endl;
	cout << binarySearch(arr, 0, 24, 100) << endl;
	cout << binarySearch(arr, 0, 24, 40) << endl;
	cout << binarySearch(arr, 0, 24, 1) << endl;
	return 0;
}