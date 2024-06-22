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
    bool isPalindromeText(string str){
        int sz=(int)str.size();
        for(int i=0;i<sz/2;i++){
            if(str[i]!=str[sz-i-1])
            return false;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        string str{""};
        for(ListNode*cur=head;cur;cur=cur->next){
            str+=(char)(cur->val+'0');
        }
        return isPalindromeText(str);
    }
};