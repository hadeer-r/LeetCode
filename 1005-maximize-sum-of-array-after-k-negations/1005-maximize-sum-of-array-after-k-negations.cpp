class Solution {
public:
    int sumOfArray(vector<int> &nums) {
        int sum{};
        for (const auto &a: nums) {
            sum += a;
        }
        return sum;
    }

    static bool cmp_abs(int a,int b) {
        return abs(a)<abs(b);
    }
    int largestSumAfterKNegations(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end(),cmp_abs);
        int sum{}, sz = (int) nums.size();
        int i = sz-1,cnt=0;
        for (; i >=0 && cnt < k; i--) {
            if(nums[i]<0) {
                cnt++;
                nums[i]*=-1;
            }
        }
        if (cnt >= k)
            return sumOfArray(nums);
        if ((k - cnt) % 2 != 0)
            nums[0] *= -1;
        return sumOfArray(nums);
    }
};