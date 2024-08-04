class Solution {
    int mod=1e9+7;
    void get_all_sum(vector<int>& nums,int n){
        for(int i=0;i<n;i++){
            int sum{nums[i]};
            for(int k=i+1;k<n;k++){
                sum+=nums[k];
                nums.push_back(sum);
            }
        }
    }
public:
    
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        get_all_sum(nums,n);
        sort(nums.begin(),nums.end());
        int sum{nums[left-1]};
        for(int i=left;i<right;i++){
            sum+=nums[i];
            sum%=mod;
        }
        return sum;
    }
};