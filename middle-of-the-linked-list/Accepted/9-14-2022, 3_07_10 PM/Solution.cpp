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
        ListNode*curr=head; // defining a pointer which is on the head.
        int cnt=0; //count 
        while(curr){ // pointer is not null
            cnt++;
            curr=curr->next;
        } 
        // upper mid is (cnt+2)/2
        int p=0;
        curr=head;
        while(curr){
           p++;
            if(p==(cnt+2)/2)return curr;
            curr=curr->next;
        }
        return curr;
    }
};