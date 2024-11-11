class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix{""};
        for(int i=0; i<(int)strs[0].size();i++){
            char ch =strs[0][i];
            for(int j=0; j<(int)strs.size();j++){
                if(ch!=strs[j][i]){
                    return prefix;
                }
            }
            prefix+=strs[0][i];
        }
        return prefix;
    }
};