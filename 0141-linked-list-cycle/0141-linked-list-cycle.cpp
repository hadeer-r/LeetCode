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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next) return false;
        unordered_map<ListNode*,bool> apperance;
        head->val =1e6;
        for(ListNode*cur=head;cur;cur=cur->next){
            if (cur->next&&cur->next->val == 1e6) return true;
            else if(cur->next)
            cur->next->val = 1e6;

        }
        return false;
    }
};