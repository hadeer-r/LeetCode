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
    ListNode* delete_head(ListNode*head){
        ListNode* tmp = head;
        head = tmp->next;
        delete tmp;
        tmp = nullptr;
        return head;
    }
    ListNode* delete_and_link(ListNode*prev ,ListNode*node){
        prev->next=node->next;
        delete node;
        return prev->next;
    }

    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,bool> appear;
        for(auto num : nums){
            appear[num]=true;
        }
        for(ListNode*cur=head,*prev=nullptr;cur; ){
            if(appear[cur->val]){
                if(prev==nullptr){
                    cur = delete_head(cur);
                    head = cur;
                    
                }
                else if (!cur->next){
                    prev->next = nullptr;
                    delete cur;
                    break;
                }
                else {
                    cur = delete_and_link(prev,cur);
                }
            }
            else {
                prev=cur,cur=cur->next;
            }
        }
        return head;
    }
};