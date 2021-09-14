#include <bits/stdc++.h>

using namespace std;

class Solution {
    int getMinPosNumIndex(vector<int>& nums){
        if(nums[0] >= 0) return 0;
        if(nums[nums.size() - 1] < 0) return nums.size();
        int i = 1 , j = nums.size() - 2;

        while(i <= j){
            int mid = i + (j - i) / 2;
            if(nums[mid-1] < 0 && nums[mid] >= 0) return mid;
            else if(nums[mid] < 0 && nums[mid+1] >= 0) return mid+1;

            else if(nums[mid] < 0) i = mid+1;
            else j = mid - 1;
        }
        return nums.size();
    }
    public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int ind = getMinPosNumIndex(nums);
        int i = ind , j = ind-1;

        while(i<nums.size() || j>=0){
            if(i==nums.size()){
                ans.push_back(nums[j] * nums[j]);
                j--;
            }
            else if(j == -1){
                ans.push_back(nums[i] * nums[i]);
                i++;
            }
            else if(nums[i] > abs(nums[j])){
                ans.push_back(nums[j] * nums[j]);
                j--;
            }
            else{
                ans.push_back(nums[i] * nums[i]);
                i++;
            }
        }
        return ans;
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
        Solution ob;
        vector<int> ans = ob.sortedSquares(nums);
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/