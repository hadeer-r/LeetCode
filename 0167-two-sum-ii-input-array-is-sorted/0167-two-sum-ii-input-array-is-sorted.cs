public class Solution {
    public int[] TwoSum(int[] numbers, int target) {
        int sz = numbers.Length;
        int x=0,y=sz-1;
        int[] result = new int[2];
    
        while(x<y){
            if(numbers[x]+numbers[y]==target){
                result[0]=x+1;
                result[1]=y+1;
                break;
            }
            else if(numbers[x]+numbers[y]>target){
                y--;
            }
            else {
                x++;
            }
        }
        return result;
    }
}