#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0 , j = numbers.size()-1;
        
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                vector<int>a;
                a.push_back(i+1);
                a.push_back(j+1);
                return a;
            }
            else if(numbers[i] + numbers[j] > target) j--;
            else i++;
        }
        vector<int> a;
        a.push_back(-1);
        return a;
    }
};

/*
Given an array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.

Return the indices of the two numbers (1-indexed) as an integer array answer of size 2, where 1 <= answer[0] < answer[1] <= numbers.length.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.

*/