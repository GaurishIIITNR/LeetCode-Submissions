// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points

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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev=head,*curr;
        if(prev->next) curr=head->next;
        int cnt=2;
        vector<int>v;
        while(curr->next){
        if((prev->val)>(curr->val) && (curr->next->val)>(curr->val))
                v.push_back(cnt);
        else if((prev->val)<(curr->val) && (curr->next->val)<(curr->val))
              v.push_back(cnt);
            cnt++;
            curr=curr->next;
            prev=prev->next;
        }
        if(v.size()<2)return {-1,-1};
        int mn=INT_MAX;
        for(int i=1;i<v.size();i++){
            mn=min(mn,(v[i]-v[i-1]));
        }
        return {mn,(v[v.size()-1]-v[0])};
        return v;
    }
};