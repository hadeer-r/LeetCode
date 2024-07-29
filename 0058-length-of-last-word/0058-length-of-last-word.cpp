class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream str(s);
        string ss={""};
        while(str>>ss){}
        return (int)ss.size();

    }
};