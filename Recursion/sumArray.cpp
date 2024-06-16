#include <iostream>
using namespace std;

int sumArray(int *numbers, int size) {
	if (size == 0) {
		return 0;
	}
	int sumPrev = sumArray(numbers, size - 1);
	return sumPrev + numbers[size - 1];
}

int main() {
	// your code goes here
	int n = 3;
	int numbers[n];
	for (int i = 1; i <= n; i++) {
		numbers[i-1] = i;
	}
	cout << sumArray(numbers, n);
	return 0;
}
