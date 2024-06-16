#include <iostream>
using namespace std;

int sumDigits(int num) {
	if (num < 10) {
        return num;
    }
    return (num % 10) + sumDigits(num/10);
}

int main() {
	// Do not modify the main method
	int num;
	cin >> num;
	cout << sumDigits(num);
	return 0;
}
