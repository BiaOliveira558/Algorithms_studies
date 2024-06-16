#include <iostream>
using namespace std;

void printDigitsReverse(int num) {
	if (num < 10) {
        cout << num << endl;
        return;
    }
    
    cout << num % 10 << endl; 
    printDigitsReverse(num / 10);
}

int main() {
	// Do not modify the main method
	int num;
	cin >> num;
	printDigitsReverse(num);
	return 0;
}