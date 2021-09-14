#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        k = n - k;
        reverse(nums.begin() , nums.begin()+k);
        reverse(nums.begin()+k , nums.end());
        reverse(nums.begin() , nums.end());
    }
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0 ; i < n ; i++) cin >> nums[i];
        int k;
        cin >> k;
        Solution ob;
        ob.rotate(nums , k);
        for(auto it : nums){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/