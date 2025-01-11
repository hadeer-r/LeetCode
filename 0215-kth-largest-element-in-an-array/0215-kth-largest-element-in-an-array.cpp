class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> qr;

        for(int i=0;i<nums.size();i++){
            qr.push(nums[i]);
        }
        int j=0;
        while(!qr.empty()&&j<k-1){
            qr.pop();
            j++;
        }
        return qr.top();
    }
};