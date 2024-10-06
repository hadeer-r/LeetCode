class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {

        int sz = nums.size();
        vector<int> prefix(sz);
        vector<int> postfix(sz);
        prefix[0]=nums[0];
        postfix[sz-1]=nums[sz-1];

        // get prefix sum
        for(int i=1;i<nums.size();i++){
            prefix[i]= prefix[i-1]+nums[i];
        }
        //get postfix sum
        for(int i=sz-2;i>=0;i--){
            postfix[i]=postfix[i+1]+nums[i];
        }

        for(int i=0;i<sz;i++){
            if(postfix[i]==prefix[i])
            return i;
        }
        
        return -1;
    }
};