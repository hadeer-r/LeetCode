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
    ListNode* get_tail(ListNode*head){
        ListNode*cur=head;
        for(;cur->next;){
            cur=cur->next;
        }
        return cur;
    }
    ListNode* get_nth(ListNode*head,int x){
        int i=0;
        ListNode*cur=head;
        for(;cur;cur=cur->next,i++){
            if(i==x)
            return cur;
        }
        return nullptr;
    }

public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* aNode=get_nth(list1,a-1);
        ListNode* bNode=get_nth(list1,b);
        ListNode* list3=aNode->next;
        aNode->next=list2;

        ListNode* tail2=get_tail(list2);
        tail2->next=bNode->next;
        bNode->next=nullptr;

        while(list3){
            ListNode*temp=list3->next;
            delete list3;
            list3=temp;
        }
        return list1;

    }
};