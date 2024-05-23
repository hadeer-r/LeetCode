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
    ListNode* add_node(ListNode* head, int data) {
        if (!head) {
            ListNode* temp = new ListNode(data);
            head = temp;
            return head;
        }
        for (ListNode* cur = head; cur; cur = cur->next) {
            if (cur->next == nullptr) {
                cur->next = new ListNode(data);
                break;
            }
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = nullptr;
        int carry{};
        while (true) {
            int sum{};
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            if (carry)
                sum += carry;

            result = add_node(result, sum % 10);
            sum /= 10;
            carry = sum;
            if (!l1 && !l2) {
                if (carry)
                    result = add_node(result, carry);
                break;
            }
        }
        return result;
    }
};