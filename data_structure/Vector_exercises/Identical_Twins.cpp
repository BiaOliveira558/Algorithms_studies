#include <iostream>
#include <vector>

using namespace std;

int getIdenticalTwinsCount(vector<int> &arr) {
    int count = 0;
    int sizeArray = arr.size();
    for (int i = 0; i < sizeArray; i++){
        for (int j = i + 1; j < sizeArray; j++){
            if (arr[i] == arr[j]){
                count ++;
            }
            
        }
        
    }
    return count;
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
        cout << getIdenticalTwinsCount(nums)<<endl;
        
    }
    
    return 0;
}
