#include <iostream>
using namespace std;

void printArray(int *numbers, int size) {
	if (size == 0) {
		return;
	}
	printArray(numbers,size - 1);
	cout << numbers[size - 1] <<endl;
}

int main() {
	// your code goes here
	int n = 3;
	int numbers[n];
	for (int i = 1; i <= n; i++) {
		numbers[i-1] = i;
	}
	printArray(numbers, n);
	return 0;
}
