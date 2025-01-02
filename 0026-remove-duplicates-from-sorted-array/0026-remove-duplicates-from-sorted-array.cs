public class Solution {
    public int RemoveDuplicates(int[] nums) {
        bool isDuplicated=false;
        int p=-1;
        int last=-200;
        int k=1;
        for(int i=1;i<nums.Length;i++){
            if(nums[i]==nums[i-1]&&isDuplicated==false){
                isDuplicated=true;
                p=i;
                last=nums[p];
            }
            else if(p!=-1&& isDuplicated==true && nums[i]>last){
                int a=nums[i];
                nums[i]=nums[p];
                nums[p]=a;
                last=nums[p];
                p++;
                k++;
            }
            else if(isDuplicated==false) {
                k++;
            }

        }
        return k;
    }
}