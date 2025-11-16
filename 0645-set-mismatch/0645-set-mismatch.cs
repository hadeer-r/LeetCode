public class Solution {
    public int[] FindErrorNums(int[] nums) {
        int[] res = new int[2];
        int[] freq = new int[nums.Length+1];
        for(int i = 0 ;i<nums.Length;i++){
            freq[nums[i]]++;
        }
        
        for(int i=1;i<freq.Length;i++){
            if (freq[i]==2) res[0]=i;
            else if(freq[i]==0) res[1]=i;
        }
        return res;
    }
}