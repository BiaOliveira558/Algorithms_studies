#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr) {
    
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;
        
        while (j >= 0 && temp < arr[j]){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
        

    }
    
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
        insertionSort(nums);
        for (auto x: nums)
        {
            cout <<x<<endl;
        }
    }
    
    
    return 0;
}
