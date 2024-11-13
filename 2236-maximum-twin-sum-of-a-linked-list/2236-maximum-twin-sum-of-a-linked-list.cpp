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
ListNode* reverse(ListNode*head){
    ListNode*prev=head,*cur=head->next;
    prev->next=nullptr;
    
    for(;cur;){

        ListNode*temp=cur->next;
        
        cur->next=prev;
        prev=cur;
        cur=temp;
        if(!cur)
        {
            head=prev;
            break;
        }
        
    }
    return head;
}

int pairSum(ListNode* head) {
    if(!head->next->next) return head->val + head->next->val;
    int maxSum{};

    ListNode* slowP=head,*fastP=head;

    while(fastP->next->next){
        slowP=slowP->next;
        fastP=fastP->next->next;

    }


    fastP=reverse(slowP->next); //reuse of fastP to point to the middle of linked list;
    slowP=head; // come slowP to the first element in linked list

    
    for(;fastP;){
        maxSum=max(maxSum,fastP->val+slowP->val);

        slowP=slowP->next;
        fastP=fastP->next;
    }



    return maxSum;
}
};