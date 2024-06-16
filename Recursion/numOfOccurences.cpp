#include <iostream>
using namespace std;

int numOfOccurences(string str, char character, int size) {
	if(size == 0){
        return 0;
    }
    int count = (str[size - 1] == character ? 1 : 0);
    return count + numOfOccurences(str,character,size-1);
}

int main() {
	// Do not modify the main method
	string str;
	char character;
	int t;
	cin >> t;
	while (t--) {
		cin >> str >> character;
		int size = str.size();
		cout << numOfOccurences(str, character, size) << endl;
	}
	return 0;
}