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
        for(ListNode*cur=head;cur;cur=cur->next){
            if (apperance[cur]==true)return true;
            else
            apperance[cur]=true;
        }
        return false;
    }
};