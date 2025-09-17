class Solution {
public:
    int maxFreqSum(string s) {
        int MaxVF =0, MaxUF = 0;
        int freq[27];
        for (auto& c : s) {
            if (c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o') {
                freq[c-'a']++;
                MaxVF = max(MaxVF, freq[c-'a']);
                continue;
            }
            freq[c-'a']++;
            MaxUF = max(MaxUF, freq[c-'a']);
        }
        return MaxVF + MaxUF;
    }
};