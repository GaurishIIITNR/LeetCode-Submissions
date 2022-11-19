// https://leetcode.com/problems/reverse-linked-list

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
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *tmp=NULL,*t,*h=head;
        if(h==NULL)return h;
        while(h->next){
            t=h->next;
            h->next=tmp;
            tmp=h;
            h=t;
        }
        h->next=tmp;
        return h;
    }
};