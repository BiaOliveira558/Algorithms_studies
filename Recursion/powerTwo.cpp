#include <iostream>
using namespace std;

int powerTwo(int number) {
	if (number == 0){
        return 1;
    }
    return 2 * powerTwo(number - 1);
    
}

int main() {
	// Do not modify the main method
	cout << powerTwo(3) << endl;
	return 0;
}