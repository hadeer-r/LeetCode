class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t || (int)s.size() == 0)
            return true;
        if (s.size() > t.size())
            return false;

        int s1{},t1{};

        while (t1 < (int)t.size()) {
            if (s[s1] == t[t1]) {
                s1++;
            }
            t1++;

            if (s1 == (int)s.size())
                return true;
        }
        return false;
    }
};