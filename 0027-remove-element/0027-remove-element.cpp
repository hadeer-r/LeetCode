class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if((int)nums.size()==0) return 0;
        int cnt{};
        int p1=0,p2=(int)nums.size()-1;
        while(p1<p2){
            if(nums[p2]==val){
                p2--;
                continue;
            }
            
            if(nums[p1]==val){
                swap(nums[p1],nums[p2]);
                p2--;
                p1++;
                cnt++;
            }
            else
            {p1++;cnt++;}

        }
        if(nums[p1]!=val) cnt++;
        return cnt;

    }
};