#include <bits/stdc++.h>
using namespace std;


class Solution {
    bool isSame(vector<int> &a1 , vector<int> &a2){
        for(int i = 0; i < 26 ; i++){
            if(a1[i] != a2[i]) return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> arr1(26 , 0) , arr2(26,0);
        
        for(auto it : s1) arr1[it - 'a']++;
        for(int i = 0 ; i < s1.size() ; i++) arr2[s2[i] - 'a']++;
        
        if(isSame(arr1 , arr2)) return true;
        
        int i = 0;
        for(int j = s1.size() ; j < s2.size() ; j++){
            arr2[s2[i++] - 'a']--;
            arr2[s2[j] - 'a']++;
            if(isSame(arr1 , arr2)) return true;
        }
        return false;
    }
};

/*
567. Permutation in String
Medium

3125

88

Add to List

Share
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.
*/