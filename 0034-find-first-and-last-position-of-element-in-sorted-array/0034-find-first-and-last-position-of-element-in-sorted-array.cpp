class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            if (nums[0] == target)
                return {0, 0};
            else
                return {-1, -1};
        }
        sort(nums.begin(), nums.end());
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if (it == nums.end() || (*it != target))
            return {-1, -1};
        auto it1 = upper_bound(nums.begin(), nums.end(), target);
        return {int(it - nums.begin()), int(it1 - nums.begin() - 1)};
    }
};
