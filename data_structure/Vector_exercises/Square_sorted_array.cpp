#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> getSquareSortedArray(vector<int> &arr) {
    
    for (int i = 0; i < arr.size(); i++){
        arr[i] = arr[i] * arr[i];
    }
    
    sort(arr.begin(),arr.end());
    return arr;
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
        getSquareSortedArray(nums);
        for (auto x: nums)
        {
            cout <<x<<endl;
        }
    }
    
    
    return 0;
}
