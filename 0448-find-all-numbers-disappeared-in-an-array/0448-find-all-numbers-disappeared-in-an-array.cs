public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        int n = nums.Length;
        bool[] freq= new bool[n+1];

        IList<int> result = new List<int>();
        for(int i=0;i<n;i++){
            freq[nums[i]]=true;
        }
        for(int i =1; i<n+1;i++){
            if(!freq[i]){
                result.Add(i);
            }
        }
        return result;
    }
}