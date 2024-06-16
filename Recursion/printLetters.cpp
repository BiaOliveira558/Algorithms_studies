#include <iostream>
using namespace std;

void printLetters(string str, int size) {
	if (size == 0) {
		return;
	}
	printLetters(str,size - 1);
	cout << str[size - 1] <<endl;
}

int main() {
	// Do not modify the main method
	string str;
	cin >> str;
	int size = str.size();
	printLetters(str, size);
	return 0;
}
