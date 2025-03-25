class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr =0;
        int maxSoFar =0;
        int maxele=nums[0];
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];

            if(curr<0){
                curr=0;
            }
            else {
                if(maxSoFar<curr){
                    maxSoFar =curr;
                }
            }

            if (nums[i]>maxele){
                maxele=nums[i];
            }
        }
        if (maxSoFar==0) return maxele;
        return maxSoFar;
    }
};