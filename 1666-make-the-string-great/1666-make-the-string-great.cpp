class Solution {
public:

    bool is_lower(char ch){
        return ch>='a' && ch <='z';
    }
    bool is_upper(char ch){
        return ch>='A' && ch <='Z';
    }
    string makeGood(string s) {
        if(s.size()<=1)return s;

        stack<char> stk;

        for(int i=0;i<s.size();i++){
            if(stk.empty()){
                stk.push(s[i]);
            }

            else if((tolower(stk.top())==tolower(s[i])&&is_lower(stk.top())&&is_upper(s[i]))
                || (tolower(stk.top())==tolower(s[i])&&is_upper(stk.top())&&is_lower(s[i])))
            {
                stk.pop();
                
            }
            else {
                stk.push(s[i]);
            }

        }

        s="";
        while(!stk.empty()){
            s=stk.top()+s;
            stk.pop();
        }

        return s;

    }
};