public class Solution {
    public int MinimumOperations(int[] nums) {
        int cnt=0;
        for(int i=0;i<nums.Length;i++){
            if(nums[i]%3!=0)
            cnt++;
        }
        return cnt;
    }
}