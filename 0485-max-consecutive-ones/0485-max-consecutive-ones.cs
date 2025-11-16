public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        
        int max = 0;
        int cnt=0;
        for(int i=0;i<nums.Length;i++){
            if(nums[i]==1){
                cnt++;
                if(max<cnt) max = cnt;
            }
            else {
                cnt = 0;
            }
        }
        return max;
        
    }
}