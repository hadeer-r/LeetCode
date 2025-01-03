class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
        vector<int> temp=nums;
        int sz=nums.size();
        int s = sz-(k%sz);
        for(int i=0;i<sz;i++){
            nums[i]=temp[s%sz];
            s++;
        }
    }
};


/*

i = n-k 4 , 5 , 6 , 0 , 1 , 2 , 3
        0 , 1 , 2 , 3 , 4 , 5  , 6
j = k 

            1 
        7        2
                    3
        6        4
            5

5,6,7,4,1,2,3

1,2,3,4,5,6,7

-1 -100 3 99



*/


