class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int max_sum{};
        sort(nums.begin(),nums.end());
        for(int i=0;i<(int)nums.size();i+=2){
            max_sum+=nums[i];
        }
        return max_sum;
    }
};