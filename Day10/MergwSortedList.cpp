#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode *temp;
        if (l1->val > l2->val){
            temp = l2;
            l2 = l2->next;
        }
        else{
            temp = l1;
            l1 = l1->next;
        }
        
        ListNode *tra = temp;
        while(l1 || l2){
            if(!l1){
                tra->next = l2;
                return temp;
            }
            else if(!l2){
                tra->next = l1;
                return temp;
            }
            else if (l1->val > l2->val){
                tra->next = l2;
                l2 = l2->next;
            }
            else{
                tra->next = l1;
                l1 = l1->next;
            }
            tra = tra->next;
        }
        return temp;
    }
};

/*
21. Merge Two Sorted Lists
Easy

8408

864

Add to List

Share
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.

 

Example 1:


Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: l1 = [], l2 = []
Output: []
Example 3:

Input: l1 = [], l2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both l1 and l2 are sorted in non-decreasing order.
Accepted
*/