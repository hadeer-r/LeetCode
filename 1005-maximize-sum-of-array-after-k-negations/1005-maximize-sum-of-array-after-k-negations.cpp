class Solution {
public:
    int sumOfArray(vector<int> &nums) {
        int sum{};
        for (const auto &a: nums) {
            sum += a;
        }
        return sum;
    }

    int largestSumAfterKNegations(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int sum{}, sz = (int) nums.size();
        int i = 0;
        for (; i < sz && i < k; i++) {
            if (nums[i] >= 0)
                break;
            nums[i] *= -1;
        }
        if (i >= k)
            return sumOfArray(nums);
        sort(nums.begin(), nums.end());
        if ((k - i) % 2 != 0)
            nums[0] *= -1;
        return sumOfArray(nums);
    }
};