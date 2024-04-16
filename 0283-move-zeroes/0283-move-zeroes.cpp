class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros{};
        for (int i=0;i<(int)nums.size();i++) {
            if (nums[i] == 0)
                zeros++;
            else {
                int x =nums[i];
                int y=nums[abs(zeros - i)];
                nums[abs(zeros - i)]=x;
                nums[i]=y;
            }
        }
    }
};