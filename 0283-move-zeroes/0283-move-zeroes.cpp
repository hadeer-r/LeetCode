class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros{};
        for (int i=0;i<(int)nums.size();i++) {
            if (nums[i] == 0)
                zeros++;
            else {
                if(nums[abs(zeros - i)]!=0)
                        continue;
                nums[abs(zeros - i)]=nums[i];
                nums[i]=0;
            }
        }
    }
};