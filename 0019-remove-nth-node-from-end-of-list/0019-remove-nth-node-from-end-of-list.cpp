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
    ListNode* removeHead(ListNode*head){
        ListNode* temp=head->next;
        delete head;
        head = temp;
        return head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz{};
        ListNode*temp=head;
        while(temp){sz++;temp=temp->next;}


        
        int front_n=sz-n;

        if(front_n==0) {
            return removeHead(head);
        }

        int cnt=0;
        for(ListNode*cur=head,*prev=nullptr;cur;prev=cur,cur=cur->next){
            

            if(cnt==front_n){
                ListNode*s=cur->next;
                prev->next=s;
                delete cur;
                break;
            }
            cnt++;

        }
        return head;
    }
};