public class Solution {

    public IList<string> BuildArray(int[] target, int n) {
        IList<string> result = new List<string>();
        int index=0;
        for(int i=1;i<=n&&index<target.Length;i++){
            result.Add("Push");
            if(target[index]!=i){
                result.Add("Pop");
            }
            else {
                index++;
            }
        }
            
        return result;
    }
}