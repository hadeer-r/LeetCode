class Solution
{
public:
    ListNode *removeNodes(ListNode *head)
    {
        stack<ListNode *> nodes;
        for (ListNode *cur = head; cur; cur = cur->next)
        {
            if (!nodes.empty() && cur->val > nodes.top()->val)
            {
                while (!nodes.empty())
                {
                    ListNode *tmp = nodes.top();
                    tmp->next = cur;
                    if (cur->val > tmp->val)
                    {

                        nodes.pop();

                    }
                    else
                        break;
                }
            }
            if (nodes.size() == 1 && nodes.top()->val < cur->val)
                nodes.pop();

            nodes.push(cur);
        }
        while (!nodes.empty()){
            head=nodes.top();
            nodes.pop();
        }
        return head;
        
    }
};