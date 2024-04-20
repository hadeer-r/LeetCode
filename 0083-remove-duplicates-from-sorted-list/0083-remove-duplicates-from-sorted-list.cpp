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
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head||head->next == nullptr)
            return head;
        for (ListNode *cur = head, *prev; cur;)
        {

            if (cur->next && cur->val == cur->next->val)
            {
                ListNode *temp = cur->next;
                if (cur == head)
                    head = temp;
                else
                    prev->next = temp;
                delete cur;
                cur = temp;
            }
            else
            {
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};