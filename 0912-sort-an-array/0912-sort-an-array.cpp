class Solution {
public:
    vector<int> sortArray(vector<int> &nums) {
        int max_val = nums[0],min_val=nums[0], sz = nums.size();
        for (int i = 0; i < sz; i++) {
            if (max_val < nums[i])
                max_val = nums[i];
            if(min_val>nums[i])
                min_val=nums[i];
        }

        unordered_map<int,int> freq;
        for(int i=0;i<sz;i++) {
            freq[nums[i]]++;
        }
        int idx{};
        for (int i=min_val;i<=max_val;i++) {
            for(int j=0;j<freq[i];j++,idx++) {
                nums[idx]=i;
            }
        }
        return nums;
    }
};