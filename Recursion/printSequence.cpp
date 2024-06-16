#include <iostream>
using namespace std;

void printNumbers(int n){
    if(n == 0){
        return;
    }
    printNumbers(n - 1);
    cout << n << std::endl; 
}

int main() {
	int n = 3;
    printNumbers(n);
	return 0;
}