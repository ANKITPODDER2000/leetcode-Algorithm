#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char , int> mp;
        int i = 0 , j = 0;
        int l = 0;
        while(i < s.length()){
            mp[s[i]]++;
            while(mp[s[i]] != 1){
                mp[s[j++]]--;
            }
            i++;
            l = max(l , i - j);
        }
        return l;
    }
};

/*
3. Longest Substring Without Repeating Characters
Medium

17515

818

Add to List

Share
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
Example 4:

Input: s = ""
Output: 0
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/