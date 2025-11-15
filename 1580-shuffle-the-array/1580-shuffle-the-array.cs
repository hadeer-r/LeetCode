public class Solution {
    public int[] Shuffle(int[] nums, int n) {
        int[] ans = new int[n*2];
        for(int i=0,j=0; i<2*n; i+=2){
            ans[i]=nums[j];
            ++j;
        }
        for(int i =1,j=n;i<n*2;i+=2){
            ans[i]=nums[j];
            ++j;
        }
        return ans;
    }
}