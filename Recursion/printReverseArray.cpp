#include <iostream>
using namespace std;

void printReverseArray(int *numbers, int n) {
	if (n== 0) {
		return;
	}
	cout << numbers[n - 1] <<endl;
	printReverseArray(numbers,n - 1);
}

int main() {
	// Do not modify the main method
	int n = 1000;
	int numbers[n];
	for (int i = 1; i <= n; i++) {
		numbers[i-1] = i;
	}
	printReverseArray(numbers, n);
	return 0;
}
