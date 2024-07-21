class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> fact;
        for (auto x : nums)
            fact[x]++;
        for (auto m : fact)
            if (m.second == 1)
                return m.first;
        return 0;
    }
};