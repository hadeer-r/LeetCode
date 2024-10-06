class Solution {
public:
    bool isValid(string s) // time O(n), memory O(n)
{
    stack<char> st;
    int sz = (int)s.size();
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else
        {
            if (st.empty())
                return false;
            if (s[i] == st.top() + 1)
                st.pop();
            else if (s[i] == st.top() + 2)
                st.pop();
            else
                return false;
        }
    }
    if(!st.empty())
    return false;
    return true;
}
};