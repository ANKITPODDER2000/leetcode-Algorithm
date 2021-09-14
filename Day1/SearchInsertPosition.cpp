#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(target <= nums[0]) return 0;
        else if(n==1) return 1;
        else if(nums[n-1] < target) return n;
        else if(nums[n-1] == target) return n-1;

        int i = 1 , j = n-1;
        while(i <= j){
        	int mid = i + (j - i) / 2;
        	if(nums[mid-1] < target && target <= nums[mid]) return mid;
        	else if(nums[mid] < target && target < nums[mid+1]) return mid+1;
        	else if(nums[mid] < target) i = mid+1;
        	else j = mid-1;
        }
        return -1;
    }
};

int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	#endif

    int t;
    cin >> t;
	while(t--){
	    Solution ob;
		int n;
		cin >> n;
		vector<int> nums(n); 
		for(int i = 0 ; i < n ;i++) cin >> nums[i];
		int target;
		cin >> target;
		cout << ob.searchInsert(nums , target) << endl;
	}
	return 0;
}