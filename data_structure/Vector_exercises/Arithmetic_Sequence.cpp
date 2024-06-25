#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool isArithmeticSequence(vector<int> &arr) {

    std::sort(arr.begin(), arr.end());
    
    int commonDiff = arr[1] - arr[0];
    
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] - arr[i - 1] != commonDiff) {
            return false;
        }
    }
    
    return true;
    
}

int main() {
    int T; // num test cases
    cin >> T;

    for (int i = 0; i < T; i++){
        int n; // number of elements
        cin>>n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++){
            cin >> nums[i];
        }
        cout << isArithmeticSequence(nums)<<endl;
        
    }
    
    return 0;
}
