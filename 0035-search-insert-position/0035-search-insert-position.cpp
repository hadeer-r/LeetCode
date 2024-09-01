class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(),nums.end(),target);
        int sz=(int)nums.size();
        if(it==nums.end())
        return sz;
        return it -nums.begin();

    }
};