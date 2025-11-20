
public class Solution {
    public int[] SmallerNumbersThanCurrent(int[] nums) {
        int n = nums.Length;
        int[] result = new int[n];
        for (int i =0 ;i<n;i++){
            if(i>0 && nums[i]==nums[i]-1){
                result[i] = result [i-1];
            }
            else {
                int cnt=0;
                for(int j=0 ;j<n;j++){
                    if(j==i) continue;
                    if(nums[i]>nums[j]) cnt++;
                }
                result[i]=cnt;
            }

        }
        return result;
    }
    
}
