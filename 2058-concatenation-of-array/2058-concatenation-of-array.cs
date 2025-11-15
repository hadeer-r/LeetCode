public class Solution {
    public int[] GetConcatenation(int[] nums) {
        int n = nums.Length;
        int[] ans = new int[2*n];
        nums.CopyTo(ans,0);
        nums.CopyTo(ans,n);

        return ans;
    }
}