#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int j = nums.size()-1;
        int i = 0;
        while(i<=j){
        	int mid = (i+j) / 2;
        	if(nums[mid] == target) return mid;
        	else if(nums[mid] > target) j = mid-1;
        	else i = mid+1;
        }
        return -1;
    }
};

int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	#endif

    Solution ob;
	int n;
	cin >> n;
	vector<int> nums(n); 
	for(int i = 0 ; i < n ;i++) cin >> nums[i];
	int target;
	cin >> target;
	cout << ob.search(nums , target) << endl;
	return 0;
}

/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

Link : https://leetcode.com/problems/binary-search/
*/