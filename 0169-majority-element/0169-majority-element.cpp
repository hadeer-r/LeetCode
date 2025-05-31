class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq=0;
        for(int i=0;i<nums.size();i++){
           if(!i) freq++;
            else {
                if(nums[i]!=nums[i-1]) freq=1;
                else freq++;
            }
            if(freq>(int)(nums.size()/2)) return nums[i];
        }
        return 0;
    }
};