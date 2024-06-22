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
    bool isPalindrome(ListNode* head) {
        bool odd{};
        stack<int> half;
        ListNode *p1 = head, *p2 = head;
        for (;; p1 = p1->next, p2 = p2->next->next) {
            half.push(p1->val);
            if (!p2)
                break;
            if (!p2->next) {
                odd = true;
                break;
            }
        }
        if (!odd) {
            int tmp = half.top();
            half.pop();
            if (half.top() == tmp) {
                half.pop();
            } else
                return false;
        } else {
            half.pop();
        }
        for (ListNode* cur = p1->next; cur; cur = cur->next) {
            if (cur->val != half.top())
                return false;
            half.pop();
        }
        return true;
    }
};