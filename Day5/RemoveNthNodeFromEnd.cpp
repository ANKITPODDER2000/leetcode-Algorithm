#include <bits\stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    ListNode* recFunc(ListNode* h , int &n){
        if(!h){ return NULL;}
        ListNode* r = recFunc(h->next , n);
        n--;
        if(n==0){
            return r;
        }
        else{
            h->next = r;
            return h;
        }
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return recFunc(head , n);
    }
};