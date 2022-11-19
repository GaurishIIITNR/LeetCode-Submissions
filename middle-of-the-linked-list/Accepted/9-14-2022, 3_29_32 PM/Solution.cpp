// https://leetcode.com/problems/middle-of-the-linked-list

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
    ListNode* middleNode(ListNode* head) {
      // method (2) fast and slow pointer 
        ListNode*slow=head,*fast=head->next;
        if(!(fast)) return slow;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->next; 
    }
};