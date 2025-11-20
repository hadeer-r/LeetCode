
public class Solution {
    public int[] SmallerNumbersThanCurrent(int[] nums) {
        SortedDictionary<int,List<int>> sortedWithIndexes = new SortedDictionary<int,List<int>>();
        int n=nums.Length;
        int[] result = new int[n];
        for(int i=0;i<n;i++){
            if(sortedWithIndexes.ContainsKey(nums[i]*-1)){
                sortedWithIndexes[nums[i]*-1].Add(i);
            }
            else {
                List<int> index = new List<int>();
                index.Add(i);
                sortedWithIndexes.Add(nums[i]*-1,index);
            }
        }
        
        foreach(KeyValuePair<int,List<int>> ele in sortedWithIndexes){
            foreach(var x in ele.Value){
                result[x]=n-ele.Value.Count;
            }
            n = n - ele.Value.Count;
        }
        return result;
    }
    
}
public class NumsComp: IComparer<KeyValuePair<int,List<int>>> {

        public int Compare(KeyValuePair<int,List<int>> a, KeyValuePair<int,List<int>> b){
            return (a.Key).CompareTo(b.Key);
        }
}