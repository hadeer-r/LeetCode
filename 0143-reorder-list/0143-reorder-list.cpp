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
    void reorderList(ListNode* head) {
        if (!head->next || !head->next->next)
            return;

        ListNode* middle = head;
        stack<ListNode*> half;
        for (ListNode* jump = head;;
             middle = middle->next, jump = jump->next->next) {

            if (!jump || !jump->next)
                break;
        }
        while (middle) {
            half.push(middle);
            middle = middle->next;
        }
        for (ListNode* cur = head;;) {
            ListNode* tmp = cur->next;
            if (cur->next == half.top()) {
                cur->next->next = nullptr;
                break;
            }
            if(cur==half.top()){
                cur->next=nullptr;
                break;
            }
            cur->next = half.top();
            half.pop();
            cur->next->next = tmp;
            cur = cur->next->next;
        }
    }
};