class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int max_perimeter{};
        sort(nums.begin(), nums.end());
        int sz{(int)nums.size()};
        for (int i = 0; i < sz - 2; i++) {
            if (nums[i] + nums[i + 1] > nums[i + 2]) {
                int sum = (nums[i] + nums[i + 1] + nums[i + 2]);
                if (max_perimeter < sum)
                    max_perimeter = sum;
            }
        }
        return max_perimeter;
    }
};