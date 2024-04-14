class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros{};
        vector<int> result((int)nums.size(), 0);
        for (int i=0;i<(int)nums.size();i++) {
            if (nums[i] == 0)
                zeros++;
            else {
                result[i-zeros]=nums[i];
            }
        }
        nums = result;
    }
};