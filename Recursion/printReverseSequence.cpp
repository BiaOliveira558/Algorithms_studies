#include <iostream>
using namespace std;

void printNumbers(int n){
    if(n == 0){
        return;
    }
    cout << n << std::endl; 
    printNumbers(n - 1);
}

int main() {
	int n = 3;
    printNumbers(n);
	return 0;
}
