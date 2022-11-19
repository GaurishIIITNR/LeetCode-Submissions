// https://leetcode.com/problems/linked-list-cycle-ii

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
         // agr koi two person start with same point with diff. speeds 
        // they always meet at same point where they started in loop.
        ListNode *curr=head,*fast=head;
        if(!(curr->next))return NULL;
        if(fast->next==NULL || fast->next->next==NULL)return NULL;
        fast=fast->next->next;curr=curr->next;
        bool flag=0;
        while(fast->next && fast->next->next){
            if(fast==curr){
                flag=1;
                break;
            }
            fast=fast->next->next;
            curr=curr->next;    
        }if(!flag)return NULL;
        curr=head;
        while(fast!=curr){
            fast=fast->next;
            curr=curr->next;
        } return curr;
    }
};