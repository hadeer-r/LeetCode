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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && list2)
            return list2;
        if (!list2 && list1)
            return list1;
        if (!list1 && !list2)
            return nullptr;

        ListNode *start1{}, *start2{};
        if (list2->val < list1->val) {
            start1 = list2;
            start2 = list1;
        } else {
            start1 = list1;
            start2 = list2;
        }
        for (ListNode *cur1 = start1, *cur2 = start2; cur1;) {
            if (cur2 == nullptr)
                break;
            if ((cur1->next == nullptr && cur2) ||
                (cur2->val <= cur1->next->val)) {
                ListNode* temp1 = cur1->next;
                ListNode* temp2 = cur2->next;

                    cur1->next = cur2;
                    cur2->next = temp1;
                    cur1 = cur2;
                    cur2 = temp2;
                
            } else {
                cur1 = cur1->next;
            }
        }
        return start1;
    }
};