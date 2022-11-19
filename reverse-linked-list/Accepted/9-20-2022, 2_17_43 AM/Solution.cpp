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
       ListNode* res_head=NULL,*curr=head,*tmp;
        while(curr){
            // temp is next pointer 
            tmp=curr->next;
            
            curr->next=res_head;
            res_head=curr;
            
            curr=tmp;
            
        }
        return res_head;
    }
};