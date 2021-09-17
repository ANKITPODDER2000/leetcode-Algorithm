#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = 0 ; i < s.size() / 2 ; i++){
            swap(s[i] , s[s.size()-1-i]);
        }
    }
};

/*

344. Reverse String
Easy

3004

831

Add to List

Share
Write a function that reverses a string. The input string is given as an array of characters s.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*/