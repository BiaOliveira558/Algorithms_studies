#include <iostream>
using namespace std;

void printLettersReverse(string str, int size) {
	if (size == 0) {
		return;
	}
	cout << str[size - 1] <<endl;
	printLettersReverse(str,size - 1);
}

int main() {
	// Do not modify the main method
	string str;
	cin >> str;
	int size = str.size();
	printLettersReverse(str, size);
	return 0;
}
