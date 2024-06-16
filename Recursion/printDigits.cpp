#include <iostream>
using namespace std;

void printDigits(int num) {
    if (num < 10) {
        cout << num << endl;
        return;
    }
    
    printDigits(num / 10);
    cout << num % 10 << endl; 
}

int main() {
    // Do not modify the main method
    int num;
    cin >> num;
    printDigits(num);
    return 0;
}