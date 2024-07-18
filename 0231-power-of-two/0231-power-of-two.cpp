class Solution {
public:
    
    bool isPowerOfTwo(int n) {// 
        int start=0,end=31;
        while(start<=end){
            int middle=start+(end -start)/2;
            long long power = pow(2,middle);
            if(power==n)
            return true;
            if(power<n)
            start=middle+1;
            else
            end=middle-1;
        }
        return false;
    }
};