#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int lp = 0;
        string ans = "";
        for(int i = 0 ; i < s.length() ;){
            while(s[i]!=' ' && i < s.length()) i++;
            for(int j=i-1 ; j>=lp ; j--){
                ans += s[j];
            }
            if(i < s.length() && s[i] == ' ') {
                ans+=' ';
            }
            i++;
            lp = i;
        }
        return ans;
    }
};

/*

Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "God Ding"
Output: "doG gniD"
 

Constraints:

1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.

*/