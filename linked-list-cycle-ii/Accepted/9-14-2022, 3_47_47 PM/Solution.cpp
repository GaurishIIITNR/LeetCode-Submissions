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
        
        ListNode *curr=head;
        while(curr && curr->val<=100000){
            curr->val=100002;
            curr=curr->next;
        }
        // if(!curr)return curr;
        return curr;
    }
};