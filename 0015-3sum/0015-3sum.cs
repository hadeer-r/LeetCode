public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums) {
        Array.Sort(nums);
        List<IList<int>> result = new List<IList<int>>();
        int n = nums.Length;
        for(int i =0 ;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int a = -nums[i];
            int x = i+1, y=n-1;

            while(x<y){
                if(nums[x]+nums[y]==a){
                    IList<int> triplet = new List<int> { nums[i], nums[x], nums[y] };
                    result.Add(triplet);
                    while(x<y && nums[x]==nums[x+1]) x++;
                    while(x<y && nums[y]==nums[y-1]) y--;
                    ++x; --y;
                }
                else if (nums[x]+nums[y]<a){
                    x++;
                }
                else{
                    y--;
                }
            }
        }
        return result;
    }
}