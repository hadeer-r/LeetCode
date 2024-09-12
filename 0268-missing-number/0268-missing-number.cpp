class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, bool> numsMap;
        int n = (int)nums.size();
        for (auto x : nums) {
            numsMap[x] = true;
        }
        for(int i=0;i<=n;i++){
            if(numsMap[i]==false)
            return i;
        }
        return -1;
    }
};