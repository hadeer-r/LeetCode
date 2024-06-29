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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        for (ListNode* curA = headA; curA; curA = curA->next) {
            for (ListNode* curB= headB; curB; curB = curB->next){
                if(curA==curB)
                return curA;
            }
        }
        return nullptr;
    }
};