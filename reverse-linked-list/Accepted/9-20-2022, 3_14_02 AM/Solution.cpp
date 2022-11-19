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
    ListNode* Head=NULL,*Tail=NULL;
    void f(ListNode* head){
        if(!head)return;
        f(head->next);
        if(!Tail){
            Tail=Head=head;
        }else {
           Tail->next=head;
           Tail=Tail->next;
        } 
        head->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
          f(head);
        return Head;
    }
};