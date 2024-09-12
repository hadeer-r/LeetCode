class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int curSum {};
        for(auto x : nums) curSum+=x;
        int n = (int)nums.size();
        int sum= (n*(n+1))/2;
        return sum-curSum;
    }
};