#include <iostream>
#include <vector>

using namespace std;

vector<int> getCumulativeSum(vector<int> &arr) {
	int n = arr.size();
    vector<int> cumulativeSum(n);

    cumulativeSum[0] = arr[0]; // The first element of cumulative sum is the same as the first element of arr

    for (int i = 1; i < n; ++i) {
        cumulativeSum[i] = cumulativeSum[i - 1] + arr[i];
    }

    return cumulativeSum;
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
        vector<int> result = getCumulativeSum(nums);
        for (auto x: result)
        {
            cout <<x<<endl;
        }
    }
    
    
    return 0;
}
