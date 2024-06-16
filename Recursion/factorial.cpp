#include <iostream>
using namespace std;

int factorial(int number) {
	if (number == 0 or number == 1){
        return 1;
    }
    return number*factorial(number-1);
}

int main() {
	// Do not modify the main method
	cout << factorial(10) << endl;
	return 0;
}